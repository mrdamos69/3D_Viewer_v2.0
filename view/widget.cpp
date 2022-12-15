#include "widget.h"

#include <QFileDialog>
#include <QMessageBox>

#include "math.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) : QOpenGLWidget(parent), ui(new Ui::Widget) {
  setWindowTitle("the visualaze_3d_object");
  setGeometry(10, 10, 1150, 870);
  this->parcing_3d_files();
}

Widget::~Widget() {
  this->clean_memory();
  delete ui;
}

void Widget::clean_memory() {
  if (vertex != nullptr && facets != nullptr) {
    delete[] vertex;
    delete[] facets;
  }
}

void Widget::resizeGL(int w, int h) {
  glViewport(0, 0, w, h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  double min = 0.0;
  double max = 0.0;
  if (!path_to_file.isNull()) {
    controller->get_max_min_frustum(&max, &min, some_data);
  }
  if (qFabs(min) > max) {
    max = qFabs(min);
  } else if (max > qFabs(min)) {
    min = -max;
  }
  double coef = 1.2;
  max *= coef;
  min *= coef;
  glOrtho(min, max, min, max, min, max);
}

void Widget::paintGL() {
  if (!path_to_file.isNull()) {
    vertex = new double[some_data.count_of_vertex * 3];
    facets = new unsigned int[some_data.count_of_polygons * 10];
    this->print_vertex();
    this->print_poligons();
    glClearColor(r1, g1, b1, 0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glRotatef(xRot, 1.0, 0.0, 0.0);
    glRotatef(yRot, 0.0, 1.0, 0.0);
    this->set_line_type(line_type);
    this->draw_vertex();
    glVertexPointer(3, GL_DOUBLE, 0, vertex);
    glEnableClientState(GL_VERTEX_ARRAY);
    glDrawArrays(GL_POINTS, 0, some_data.count_of_vertex);
    glLineWidth(width_edge);
    glColor4f(r, g, b, 1);
    glDrawElements(GL_POINTS, some_data.count_of_polygons * 6, GL_UNSIGNED_INT,
                   facets);
    glColor4f(r2, g2, b2, 1);
    glDrawElements(GL_LINES, some_data.count_of_polygons * 6, GL_UNSIGNED_INT,
                   facets);
    glDisableClientState(GL_VERTEX_ARRAY);
  }
}

void Widget::print_vertex() {
  for (int i = 0, k = 0; i < some_data.matrix.get_rows(); i++) {
    for (int j = 0; j < some_data.matrix.get_cols(); j++, k++) {
      vertex[k] = some_data.matrix(i, j);
      if (k == 0) {
        min_x = vertex[k];
        max_x = vertex[k];
        min_y = vertex[k];
        max_y = vertex[k];
        min_z = vertex[k];
        max_z = vertex[k];
      } else {
        if (k % 2 == 0)
          check_vertex_min_max(vertex[k], 2);
        else if (k % 3 == 0)
          check_vertex_min_max(vertex[k], 3);
        else
          check_vertex_min_max(vertex[k], 1);
      }
    }
  }
}

void Widget::print_poligons() {
  for (int i = 0, k = 0; i < some_data.count_of_polygons; i++) {
    for (int j = 0; j < some_data.polygons[i].numbers_of_vertexes_in_facets * 2;
         j++, k++) {
      facets[k] = some_data.polygons[i].vertexes[j];
    }
  }
}

void Widget::draw_vertex() {
  if (type_point != 0) {
    glPointSize(width);
    for (int i = 0; i < some_data.count_of_vertex + 1; i++) {
      if (type_point == 1) {
        glEnable(GL_POINT_SMOOTH);
        glBegin(GL_POINT_SMOOTH);
        glEnd();
      } else if (type_point == 2) {
        glDisable(GL_POINT_SMOOTH);
        glBegin(GL_POINT);
        glEnd();
      }
    }
  } else {
    glPointSize(0);
  }
}

void Widget::set_line_type(int value) {
  switch (value) {
    case 0:
      glDisable(GL_LINE_STIPPLE);
      break;
    case 1:
      glLineStipple(1, 0x00F0);
      glEnable(GL_LINE_STIPPLE);
      break;
    case 2:
      glDisable(GL_LINE_STIPPLE);
      break;
    case 3:
      glLineStipple(1, 0x00FF);
      glEnable(GL_LINE_STIPPLE);
      break;
    case 4:
      glLineStipple(2, 0x00FF);
      glEnable(GL_LINE_STIPPLE);
      break;
    case 5:
      glLineStipple(1, 0x0C0F);
      glEnable(GL_LINE_STIPPLE);
      break;
    default:
      break;
  }
}

void Widget::mousePressEvent(QMouseEvent *mo) { mPos = mo->pos(); }

void Widget::mouseMoveEvent(QMouseEvent *mo) {
  xRot = 1 / M_PI * (mo->pos().y() - mPos.y());
  yRot = 1 / M_PI * (mo->pos().x() - mPos.x());
  update();
}

int Widget::validation_of_files(std::string &name_file) {
  if (!controller->count_vertexes_polygons(name_file, some_data) &&
      !path_to_file.isNull()) {
    errors(3);
    return 1;
  }
  if (!controller->create_matrix_obj(name_file, some_data) &&
      !path_to_file.isNull()) {
    errors(4);
    return 1;
  }
  if (!controller->note_vertexes_polygons(name_file, some_data) &&
      !path_to_file.isNull()) {
    errors(5);
    return 1;
  }
  return 0;
}

void Widget::errors(int error) {
  switch (error) {
    case 1:
      QMessageBox::warning(this, "Внимание", "File not open");
      break;
    case 2:
      QMessageBox::warning(this, "Внимание", "File not exist");
      break;
    case 3:
      QMessageBox::warning(this, "Внимание", "File doesnot parsed");
      break;
    case 4:
      QMessageBox::warning(this, "Внимание", "File doesnot create_matrix_obj");
      break;
    case 5:
      QMessageBox::warning(this, "Внимание",
                           "File doesnot note_vertexes_polygons");
      break;
    default:
      break;
  }
}

void Widget::parcing_3d_files() {
  path_to_file = QFileDialog::getOpenFileName(
      this, "Выберите файл с моделью", QDir::currentPath(),
      "3d model (*.obj) ;; All files (*.*)");
  QByteArray tmp = path_to_file.toLocal8Bit();
  std::string name_of_file = tmp.data();
  if (name_of_file.empty()) {
    errors(2);
    path_to_file = NULL;
    return;
  }
  if (validation_of_files(name_of_file)) {
    path_to_file = NULL;
    return;
  }
}

void Widget::check_vertex_min_max(double check, int choise) {
  switch (choise) {
    case 1:
      if (std::less<double>{}(max_x, check)) max_x = check;
      if (std::greater<double>{}(min_x, check)) min_x = check;
      break;
    case 2:
      if (std::less<double>{}(max_y, check)) max_y = check;
      if (std::greater<double>{}(min_y, check)) min_y = check;
      break;
    case 3:
      if (std::less<double>{}(max_z, check)) max_z = check;
      if (std::greater<double>{}(min_z, check)) min_z = check;
      break;
  }
}

void Widget::for_move(double x, double y, double z) {
  if (!path_to_file.isNull()) {
    controller->move_obj(some_data, x, y, z);
    update();
  }
}

void Widget::for_rot(double x, double y, double z) {
  if (!path_to_file.isNull()) {
    controller->rotation_by_ox(some_data, x);
    controller->rotation_by_oy(some_data, y);
    controller->rotation_by_oz(some_data, z);
    update();
  }
}

void Widget::for_scale(double x) {
  controller->scale_obj(some_data, x);
  update();
}

void Widget::change_background_color(double x, double y, double z) {
  r1 = x;
  g1 = y;
  b1 = z;
  update();
}

void Widget::change_vertex_color(double x, double y, double z) {
  r = x;
  g = y;
  b = z;
  update();
}

void Widget::change_vertex_size(double x) {
  glPointSize(x);
  update();
}

void Widget::change_edge_color(double x, double y, double z) {
  r2 = x;
  g2 = y;
  b2 = z;
  update();
}

void Widget::change_edge_size(double x) {
  glLineWidth(x);
  update();
}
void Widget::change_line_type(double x) {
  line_type = x;
  update();
}

void Widget::change_vertex_type(double x) {
  type_point = x;
  update();
}

void Widget::change_geo() {
  repaint();
  update();
}
