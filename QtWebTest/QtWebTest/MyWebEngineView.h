#pragma once
#include "qwebengineview.h"
class MyWebEngineView :  public QWebEngineView {
  public:
    MyWebEngineView(QWidget* parent = Q_NULLPTR);
    ~MyWebEngineView();

  protected:
    virtual QWebEngineView *createWindow(QWebEnginePage::WebWindowType type) override;

};

