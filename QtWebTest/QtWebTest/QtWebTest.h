#pragma once

#include <QtWidgets/QWidget>
#include "ui_QtWebTest.h"

class MyWebEngineView;
class QtWebTest : public QWidget {
    Q_OBJECT

  public:
    QtWebTest(QWidget *parent = Q_NULLPTR);

  public slots:
    void GoUrl();
    void WebViewUrlChanged(const QUrl& url);

  private:
    Ui::QtWebTestClass ui;
    MyWebEngineView *webView;
};
