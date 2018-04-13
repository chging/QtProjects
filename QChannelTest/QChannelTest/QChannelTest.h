#pragma once

#include <QtWidgets/QDialog>
#include "ui_QChannelTest.h"

class QWebEngineView;
class QChannelTest : public QDialog {
    Q_OBJECT

  public:
    QChannelTest(QWidget *parent = Q_NULLPTR);

  private:
    Ui::QChannelTestClass ui;
    QWebEngineView *m_view;
};
