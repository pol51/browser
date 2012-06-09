#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>

namespace Ui { class MainWindow; }

class QUrl;

class MainWindow : public QMainWindow
{
  Q_OBJECT

  public:
    explicit MainWindow(QWidget *parent = NULL);
    ~MainWindow();

  protected slots:
    void setUrl();
    void refreshUrl(const QUrl &url);

  private:
    Ui::MainWindow *ui;
};

#endif
