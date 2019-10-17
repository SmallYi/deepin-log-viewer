#ifndef LOGCOLLECTORMAIN_H
#define LOGCOLLECTORMAIN_H

#include <DMainWindow>
#include <DSearchEdit>
#include <DTreeView>
#include <QHBoxLayout>
#include <QSplitter>
#include <QVBoxLayout>
#include "displaycontent.h"
#include "filtercontent.h"
#include "loglistview.h"
#include "logtreeview.h"

class LogCollectorMain : public Dtk::Widget::DMainWindow
{
public:
    LogCollectorMain(QWidget *parent = nullptr);
    ~LogCollectorMain();

    void initUI();
    void initConnection();

private:
    Dtk::Widget::DSearchEdit *m_searchEdt;
    FilterContent *m_topRightWgt;
    //    LogTreeView *m_treeView;
    LogListView *m_treeView;
    DisplayContent *m_midRightWgt;
    QHBoxLayout *m_hLayout;
    QVBoxLayout *m_vLayout;

    QSplitter *m_hSplitter;
};

#endif  // LOGCOLLECTORMAIN_H