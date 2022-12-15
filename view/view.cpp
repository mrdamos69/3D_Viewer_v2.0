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
    p_test->change_background_color(col.selectedColor().redF(),
                                    col.selectedColor().greenF(),
                                    col.selectedColor().blueF());
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
    p_test->change_vertex_color(col.selectedColor().redF(),
                                col.selectedColor().greenF(),
                                col.selectedColor().blueF());
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
    p_test->change_edge_color(col.selectedColor().redF(),
                              col.selectedColor().greenF(),
                              col.selectedColor().blueF());
    p_test->update();
    create_screen();
  }
}

void view::on_cBox_vertex_type_activated(int index) {
  if (ui->download_obj->isCheckable()) {
    switch (index) {
      case 0:
        p_test->change_vertex_type(index);
        break;
      case 1:
        p_test->change_vertex_type(index);
        break;
      case 2:
        p_test->change_vertex_type(index);
        break;
      default:
        p_test->change_vertex_type(0);
        break;
    }
    p_test->update();
    create_screen();
  }
}

void view::on_screenshot_clicked() {
  QString file = QFileDialog::getSaveFileName(this, "Save as...", "name",
                                              "BMP (*.bmp);; JPEG (*.jpeg)");
  p_test->grab().save(file);
}

void view::create_screen() {
  if (flag == 1) {
    mas_image.push_back(p_test->grab().toImage());
  }
}

void view::on_start_image_clicked() { flag = 1; }

void view::on_stop_image_clicked() {
  // flag = 0;
  // QString fileName = QFileDialog::getSaveFileName(this, tr("Save
  // screenshot"), "", tr("GIF screenshot (*.gif);;GIF screenshot(*.gif)"));
  // QGifImage gif(QSize(640, 480)); QVector<QRgb>
  // ctable; ctable << qRgb(255, 255, 255)
  //       << qRgb(0, 0, 0)
  //       << qRgb(255, 0, 0)
  //       << qRgb(0, 255, 0)
  //       << qRgb(0, 0, 255)
  //       << qRgb(255, 255, 0)
  //       << qRgb(0, 255, 255)
  //       << qRgb(255, 0, 255);

  // gif.setGlobalColorTable(ctable, Qt::black);
  // gif.setDefaultTransparentColor(Qt::black);
  // gif.setDefaultDelay(100);

  // for (QVector<QImage>::Iterator img = mas_image.begin(); img !=
  // mas_image.end(); ++img) {
  //     gif.addFrame(*img);
  // }
  // gif.save(fileName);
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
    p_test->width = arg1;
    p_test->change_vertex_size(p_test->width);
    p_test->update();
    create_screen();
  }
}

void view::on_sBox_line_size_valueChanged(int arg1) {
  if (ui->download_obj->isCheckable()) {
    p_test->width_edge = arg1;
    p_test->change_edge_size(p_test->width_edge);
    p_test->update();
    create_screen();
  }
}

void view::on_cBox_line_type_activated(int index) {
  if (ui->download_obj->isCheckable()) {
    p_test->line_type = index;
    p_test->change_line_type(p_test->line_type);
    p_test->update();
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
    this->coordinates[0] = M_PI / 180.0 * (- ui->dSpinBox_rot->value());
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
    this->coordinates[1] = M_PI / 180.0 * (- ui->dSpinBox_rot_2->value());
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
    this->coordinates[2] = M_PI / 180.0 * (- ui->dSpinBox_rot_3->value());
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
    this->coordinates[3] = (- ui->dSpinBox_move->value());
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
    this->coordinates[4] = (- ui->dSpinBox_move_2->value());
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
    this->coordinates[4] = (- ui->dSpinBox_move_3->value());
    emit signal_rot_move(this->coordinates);
    create_screen();
  }
}
