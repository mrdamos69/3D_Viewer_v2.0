#ifndef WIDGET_H
#define WIDGET_H

#define GL_SILENCE_DEPRECATION
#include <glu.h>
#include <QtOpenGLWidgets/qopenglwidget.h>

#include <QGuiApplication>
#include <QMouseEvent>
#include <QOpenGLFunctions>
#include <QSettings>
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
  QVector<double> color{0, 0, 0, 255, 255, 255, 0, 0, 0};
  QVector<int> set_vertex_line{0, 0, 0, 0};
  int min_x, max_x, min_y, max_y, min_z, max_z;
  double point_size;
  int flag_for_start;
  char *fiename_global;
  bool change_geometry = true;
  double *vertex;
  unsigned int *facets;
  char *name_of_file;
  s21::data_t some_data;
  QString label_with_inf;
  void parcing_3d_files();
  void loadSettings();
  void saveSettings();
  void switch_geometry();

 public slots:
  void slot_zoom(double x);
  void slot_rot_move(QVector<double> rmz);
  void slot_color(QVector<double> color);
  void slot_vetex_and_line(QVector<int> setting);
  void slot_geometry(bool clicked);
  void errors(int error);
  void change_geo();

 private:
  Ui::Widget *ui;
  s21::Controller *controller = nullptr;
  QSettings *settings;
  void initializeGL() override;
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
