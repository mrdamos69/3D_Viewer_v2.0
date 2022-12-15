#include "view.h"

#include "ui_view.h"

view::view(QWidget *parent) : QMainWindow(parent), scale(1), ui(new Ui::view) {
  ui->setupUi(this);
}

view::~view() { delete ui; }

void view::on_download_obj_clicked() {
  p_test = new Widget(this);
  connect(this, &view::signal_zoom, p_test, &Widget::slot_zoom);
  connect(this, &view::signal_rot_move, p_test, &Widget::slot_rot_move);
  connect(this, &view::signal_color, p_test, &Widget::slot_color);
  connect(this, &view::signal_vetex_and_line, p_test,
          &Widget::slot_vetex_and_line);

  p_test->show();
  create_screen();
  if (!p_test->path_to_file.isNull()) {
    ui->download_obj->setCheckable(true);
    information_of_file();
  } else {
    p_test->errors(1);
    ui->download_obj->setCheckable(false);
  }
}

void view::on_background_white_clicked() {
  QColorDialog col(this);
  col.setWindowTitle("Background color selection");
  col.setCurrentColor(QColorConstants::Black);
  if (col.exec() == QColorDialog::Accepted && ui->download_obj->isCheckable()) {
    qDebug() << col.selectedColor();
    color[3] = col.selectedColor().redF();
    color[4] = col.selectedColor().greenF();
    color[5] = col.selectedColor().blueF();
    emit signal_color(this->color);
    p_test->update();
    create_screen();
  }
}

void view::on_change_vertex_color_clicked() {
  QColorDialog col(this);
  col.setWindowTitle("Vertex color selection");
  col.setCurrentColor(QColorConstants::White);
  if (col.exec() == QColorDialog::Accepted && ui->download_obj->isCheckable()) {
    qDebug() << col.selectedColor();
    color[0] = col.selectedColor().redF();
    color[1] = col.selectedColor().greenF();
    color[2] = col.selectedColor().blueF();
    emit signal_color(this->color);
    p_test->update();
    create_screen();
  }
}

void view::on_change_edge_color_clicked() {
  QColorDialog col(this);
  col.setWindowTitle("Line color selection");
  col.setCurrentColor(QColorConstants::White);
  if (col.exec() == QColorDialog::Accepted && ui->download_obj->isCheckable()) {
    qDebug() << col.selectedColor();
    color[6] = col.selectedColor().redF();
    color[7] = col.selectedColor().greenF();
    color[8] = col.selectedColor().blueF();
    emit signal_color(this->color);
    p_test->update();
    create_screen();
  }
}

void view::on_cBox_vertex_type_activated(int index) {
  if (ui->download_obj->isCheckable()) {
    this->set_vertex_line[0] = index;
    switch (index) {
      case 0:
        emit signal_vetex_and_line(this->set_vertex_line);
        break;
      case 1:
        emit signal_vetex_and_line(this->set_vertex_line);
        break;
      case 2:
        emit signal_vetex_and_line(this->set_vertex_line);
        break;
      default:
        emit signal_vetex_and_line(this->set_vertex_line);
        break;
    }
    p_test->update();
    create_screen();
  }
}

void view::on_screenshot_clicked() {
  if (ui->download_obj->isCheckable()) {
    QFileDialog image(this);
    QString file_name = image.getSaveFileName(this, tr("Save a screenshot"), "",
                                              tr("image (*.jpeg *.bmp)"));
    QImage img = p_test->grabFramebuffer();
    img.save(file_name);
  }
}

void view::create_screen() {
  if (flag == 1) {
    mas_image.push_back(p_test->grab().toImage());
  }
}

void view::on_start_image_clicked() { flag = 1; }

void view::on_stop_image_clicked() {
  if (ui->download_obj->isCheckable()) {
    flag = 0;
    QString fileName = QFileDialog::getSaveFileName(
        this, tr("Save screenshot"), "",
        tr("GIF screenshot (*.gif);;GIF screenshot(*.gif)"));
    QGifImage gif;
    QImage img = p_test->grabFramebuffer();
    for (QVector<QImage>::Iterator img = mas_image.begin();
         img != mas_image.end(); ++img) {
      gif.addFrame(*img);
    }
    gif.save(fileName);
  }
}

void view::information_of_file() {
  if (ui->download_obj->isCheckable()) {
    int vertex_inf = p_test->some_data.count_of_vertex;
    int polygon_inf = p_test->some_data.count_of_polygons;
    QString str_vertex = QString::number(vertex_inf, 'g', 15);
    QString str_polygons = QString::number(polygon_inf, 'g', 15);
    ui->lineEdit_open->setText(p_test->path_to_file);
    ui->label_of_inf->setText("Number of vertex: " + str_vertex);
    ui->label_of_inf_2->setText("Number of polygons: " + str_polygons);
  }
}

void view::on_sBox_vertex_size_valueChanged(int arg1) {
  if (ui->download_obj->isCheckable()) {
    this->set_vertex_line[1] = arg1;
    emit signal_vetex_and_line(set_vertex_line);
    create_screen();
  }
}

void view::on_sBox_line_size_valueChanged(int arg1) {
  if (ui->download_obj->isCheckable()) {
    this->set_vertex_line[3] = arg1;
    emit signal_vetex_and_line(set_vertex_line);
    create_screen();
  }
}

void view::on_cBox_line_type_activated(int index) {
  if (ui->download_obj->isCheckable()) {
    this->set_vertex_line[2] = index;
    emit signal_vetex_and_line(set_vertex_line);
    create_screen();
  }
}

void view::on_change_zoom_clicked() {
  if (ui->download_obj->isCheckable()) {
    emit signal_zoom(scale + ui->dSpinBox_zoom->value());
    create_screen();
  }
}

void view::on_change_zoom_2_clicked() {
  if (ui->download_obj->isCheckable()) {
    emit signal_zoom(scale + (-ui->dSpinBox_zoom->value()));
    create_screen();
  }
}

void view::on_change_rot_x_pressed() {
  if (ui->download_obj->isCheckable()) {
    this->coordinates[0] = M_PI / 180.0 * ui->dSpinBox_rot->value();
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}

void view::on_change_rot_x2_pressed() {
  if (ui->download_obj->isCheckable()) {
    this->coordinates[0] = M_PI / 180.0 * (-ui->dSpinBox_rot->value());
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}

void view::on_change_rot_y_pressed() {
  if (ui->download_obj->isCheckable()) {
    this->coordinates[1] = M_PI / 180.0 * ui->dSpinBox_rot_2->value();
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}

void view::on_change_rot_y2_pressed() {
  if (ui->download_obj->isCheckable()) {
    this->coordinates[1] = M_PI / 180.0 * (-ui->dSpinBox_rot_2->value());
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}

void view::on_change_rot_z_pressed() {
  if (ui->download_obj->isCheckable()) {
    this->coordinates[2] = M_PI / 180.0 * ui->dSpinBox_rot_3->value();
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}

void view::on_change_rot_z2_pressed() {
  if (ui->download_obj->isCheckable()) {
    this->coordinates[2] = M_PI / 180.0 * (-ui->dSpinBox_rot_3->value());
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}

void view::on_change_move_x_pressed() {
  if (ui->download_obj->isCheckable()) {
    this->coordinates[3] = ui->dSpinBox_move->value();
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}

void view::on_change_move_x2_pressed() {
  if (ui->download_obj->isCheckable()) {
    this->coordinates[3] = (-ui->dSpinBox_move->value());
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}

void view::on_change_move_y_pressed() {
  if (ui->download_obj->isCheckable()) {
    this->coordinates[4] = ui->dSpinBox_move_2->value();
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}

void view::on_change_move_y2_pressed() {
  if (ui->download_obj->isCheckable()) {
    this->coordinates[4] = (-ui->dSpinBox_move_2->value());
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}

void view::on_change_move_z_pressed() {
  if (ui->download_obj->isCheckable()) {
    this->coordinates[4] = ui->dSpinBox_move_3->value();
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}

void view::on_change_move_z2_pressed() {
  if (ui->download_obj->isCheckable()) {
    this->coordinates[4] = (-ui->dSpinBox_move_3->value());
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}
