#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "canvaswidget.h"

#include <QAction>

#include <QDebug>
#include <QKeyEvent>
#include <QClipboard>
#include <QColorDialog>

class ColorDialogButton;

enum Instruments {CURSOR = 0,MOVE = 1, FIGURE = 2};

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
protected:
    void keyPressEvent(QKeyEvent* event);
    void keyReleaseEvent(QKeyEvent * event);
    void deleteSelected();
    bool eventFilter( QObject * o, QEvent * e );
    void shapeDefault();
private slots:

    void newFile();
    void open();
    void close();

    bool save();
    bool saveAs();

    bool exportSVG();
    void print();

    void undo();
    void redo();

    void cut();
    void copy();
    void paste();

    void selectAll();

    void deleteAction();

    void about();

    void selectShape(int type);

    void selectRectangle();
    void selectParallelogram();
    void selectRhombus();
    void selectZigzag();
    void selectArrow();

    void selectFillColor(QColor newFillColor);
    void selectLineColor(QColor newLineColor);

    void reflect();

    void setArrowsTipCoeficient(double coef);
    void setZigzagPointAmount(int amount);


private:
    Ui::MainWindow *ui;
    CanvasWidget *canvas;
    Instruments instrument;
    ColorDialogButton *fillColorPallete;
    void setTextToClipboard(const QString &text);
    const QString getTextToClipboard();

    QString curFileName;
    void setCurrentFile(const QString &filename);

    void createMenus();
    void createActions();

    QString loadFileText(const QString &fileName);
    shapesContainer parseXMLFileForSVG(const QString &filename);
    shapesContainer parseXMLTextForSVG(const QString &svgText);

    QString loadFileNameDialog();
    bool haveToSave();

    //Coding of data
    const QString svgImageCode(shapesContainer *container);

    bool saveFileByData(QString fileName);
    bool saveFileByText(QString fileName, QString text);
    QString saveFileNameDialog();

    QMenu *fileMenu;
    QMenu *editMenu;

    QAction *newAct;
    QAction *openAct;
    QAction *saveAct;
    QAction *saveAsAct;

    QAction *exportSVGAct;

    QAction *closeAct;
    QAction *printAct;

    QAction *undoAct;
    QAction *redoAct;

    QAction *cutAct;
    QAction *copyAct;
    QAction *pasteAct;
    QAction *deleteAct;
    QAction *selectAllAct;

    QAction *aboutAct;

};

#endif // MAINWINDOW_H
