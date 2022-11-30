#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  connect(ui->up, &QPushButton::pressed, this, &MainWindow::up);
  connect(ui->down, &QPushButton::pressed, this, &MainWindow::down);
  current_state = "session";
  current_selected = "1";
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow:: up(){

   int temp_current = stoi(current_selected);
  if (current_state == "session") {

      QString buttonName = "pushButton_" + QString::number(temp_current);
      QPushButton* tempPushButton = ui->centralwidget->findChild<QPushButton*>(buttonName);
      tempPushButton->setStyleSheet("background-color: white");
      if (temp_current < 8){
          temp_current += 1;
      }
      else {
          temp_current = 1;
      }
      buttonName = "pushButton_" + QString::number(temp_current);
      tempPushButton = findChild<QPushButton*>(buttonName);
      if (temp_current >= 7) {
          tempPushButton->setStyleSheet("background-color: red");
      }
      else if (temp_current >= 4){
          tempPushButton->setStyleSheet("background-color: yellow");
      }
      else {
          tempPushButton->setStyleSheet("background-color: green");
      }
  } else if (current_state == "customize") {
//       int currentTimerCount = 0;
//       currentTimerCount += 30;
//       QTime newTime(0,currentTimerCount/60,currentTimerCount%60);
//       timeString = newTime->toString("mm:ss");
//       scene->addText(timeString);


//       QTime newTime = Time->addSecs(60*currentTimerCount);
//       Time->setHMS(newTime.hour(),newTime.minute(),newTime.second());
//       ui->countdown->setPlainText(Time->toString("mm:ss"));

      }
  current_selected = to_string(temp_current);
    }

//    //LANYUE
void MainWindow:: down(){
  qInfo("down");
   int temp_current = stoi(current_selected);
  if (current_state == "session") {
      QString buttonName = "pushButton_" + QString::number(temp_current);
      QPushButton* tempPushButton = findChild<QPushButton*>(buttonName);
      if (tempPushButton != nullptr)
      {
          tempPushButton->setStyleSheet("QPushButton{ background-color: white }");
      }
      if (temp_current > 1){
          temp_current -= 1;
      }
      else {
          temp_current = 8;
      }
      buttonName = "pushButton_" + QString::number(temp_current);
      tempPushButton = findChild<QPushButton*>(buttonName);
      if (temp_current >= 7) {
          tempPushButton->setStyleSheet("background-color: red");
      }
      else if (temp_current >= 4){
          tempPushButton->setStyleSheet("background-color: yellow");
      }
      else {
          tempPushButton->setStyleSheet("background-color: green");
      }
  } else if (current_state == "customize") {
//       int currentTimerCount = 0;
//       currentTimerCount += 30;
//       QTime newTime(0,currentTimerCount/60,currentTimerCount%60);
//       timeString = newTime->toString("mm:ss");
//       scene->addText(timeString);


//       QTime newTime = Time->addSecs(60*currentTimerCount);
//       Time->setHMS(newTime.hour(),newTime.minute(),newTime.second());
//       ui->countdown->setPlainText(Time->toString("mm:ss"));

      }
  current_selected = to_string(temp_current);
  }
