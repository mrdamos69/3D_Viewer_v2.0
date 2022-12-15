#ifndef WIDGET_H
#define WIDGET_H

#define GL_SILENCE_DEPRECATION
#include <GL/glu.h>
#include <QtOpenGLWidgets/qopenglwidget.h>

#include <QGuiApplication>
#include <QMouseEvent>
#include <QOpenGLFunctions>
#include <QTimer>
#include <QWidget>

#include "../controller/controller.h"
#include "../model/struct/struct.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QOpenGLWidget {
  Q_OBJECT
 public:
  Widget(QWidget *parent = nullptr);
  ~Widget();
  double xRot, yRot, zRot;
  QPoint mPos;
  QString path_to_file;
  void mousePressEvent(QMouseEvent *) override;
  void mouseMoveEvent(QMouseEvent *) override;
  double r = 0, g = 0, b = 0;
  double r1 = 255, g1 = 255, b1 = 255;
  double r2 = 0, g2 = 0, b2 = 0;
  double width = 5, width_edge = 2;
  int min_x, max_x, min_y, max_y, min_z, max_z;
  int line_type = 0;
  int type_point = 0;
  double point_size;
  int flag_for_start;
  char *fiename_global;
  int change_geometry = 0;
  double *vertex;
  unsigned int *facets;
  char *name_of_file;
  s21::data_t some_data;
  QString label_with_inf;
  void parcing_3d_files();

 public slots:
//  void for_move(double x, double y, double z);
//  void for_rot(double x, double y, double z);
  void slot_zoom(double x);
  void slot_rot_move(QVector<double> rmz);

  void change_background_color(double x, double y, double z);
  void change_vertex_color(double x, double y, double z);
  void change_edge_color(double x, double y, double z);

  void change_vertex_size(double x);
  void change_edge_size(double x);
  void change_line_type(double x);
  void change_vertex_type(double x);

  void errors(int error);
  void change_geo();

 private:
  Ui::Widget *ui;
  s21::Controller *controller = nullptr;
  void resizeGL(int w, int h) override;
  void paintGL() override;
  int validation_of_files(std::string &name_file);
  void check_vertex_min_max(double check, int choise);
  void print_vertex();
  void print_poligons();
  void draw_vertex();
  void set_line_type(int value);
  void open_file();
  void clean_memory();
};
#endif  // WIDGET_H
