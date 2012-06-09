#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  connect(ui->btnGo, SIGNAL(clicked()), SLOT(setUrl()));
  connect(ui->txtUrl, SIGNAL(returnPressed()), SLOT(setUrl()));
  connect(ui->webView, SIGNAL(urlChanged(QUrl)), SLOT(refreshUrl(QUrl)));

  //todo navigation: tri des onglets en arbres
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::setUrl()
{
  ui->webView->setUrl(QUrl(ui->txtUrl->text()));
}

void MainWindow::refreshUrl(const QUrl &url)
{
  ui->txtUrl->setText(url.toString());
}
