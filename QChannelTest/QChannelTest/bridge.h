#pragma once
#include <QObject>

class bridge :  public QObject {

    Q_OBJECT

  public:
    static bridge* instance();
  public slots:
    void showMsgBox();

  public:
    ~bridge();
  private:
    bridge();
};

