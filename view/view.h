#ifndef VIEW_H
#define VIEW_H

#include <QColorDialog>
#include <QFileDialog>
#include <QImage>
#include <QMainWindow>
#include <QPainter>
#include <QPixmap>
#include <QSize>
#include <QVector>

#include "../QtGifImage-master/src/gifimage/qgifimage.h"
#include "widget.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class view;
}
QT_END_NAMESPACE

class view : public QMainWindow {
  Q_OBJECT

 public:
  view(QWidget *parent = nullptr);
  ~view();
  int flag = 0;
  double scale;
  Widget *p_test;
  QVector<QImage> mas_image;

  QVector<double> coordinates{0, 0, 0, 0, 0, 0, 0};

//  QVector<double> rot{0, 0, 0};
//  QVector<double> move{0, 0, 0};

 private slots:
  void on_download_obj_clicked();

  void on_background_white_clicked();

  void on_change_vertex_color_clicked();

  void on_change_edge_color_clicked();

  void on_screenshot_clicked();

  void create_screen();

  void on_start_image_clicked();

  void on_stop_image_clicked();

  void information_of_file();

  void on_cBox_vertex_type_activated(int index);

  void on_sBox_vertex_size_valueChanged(int arg1);

  void on_sBox_line_size_valueChanged(int arg1);

  void on_change_zoom_clicked();

  void on_change_zoom_2_clicked();

  void on_cBox_line_type_activated(int index);

  void on_change_rot_x_pressed();

  void on_change_rot_x2_pressed();

  void on_change_rot_y_pressed();

  void on_change_rot_y2_pressed();

  void on_change_rot_z_pressed();

  void on_change_rot_z2_pressed();

  void on_change_move_x_pressed();

  void on_change_move_x2_pressed();

  void on_change_move_y_pressed();

  void on_change_move_y2_pressed();

  void on_change_move_z_pressed();

  void on_change_move_z2_pressed();

 private:
  Ui::view *ui;

 signals:
  void signal_zoom(double);
  void signal_rot_move(QVector<double>);

//  void signal_zoom(QVector<double>);
//  void signal_zoom(QVector<double>);

};
#endif  // VIEW_H
