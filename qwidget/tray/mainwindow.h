#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QSystemTrayIcon>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
class QAction;
class QCheckBox;
class QComboBox;
class QGroupBox;
class QLabel;
class QLineEdit;
class QMenu;
class QPushButton;
class QSpinBox;
class QTextEdit;
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonShowTray_clicked();

    void on_pushButtonHideTray_clicked();

    void on_pushButtonChangIcon_clicked();

private:
    Ui::MainWindow *ui;

    // 退出选项
    QAction *exit;
    // 托盘
    QSystemTrayIcon *trayIcon;
    // 菜单
    QMenu *trayIconMenu;


};
#endif // MAINWINDOW_H
