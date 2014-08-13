#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <QMainWindow>
#include <dialog.h>

namespace Ui {
class TextEditor;
}

class TextEditor : public QMainWindow
{
    Q_OBJECT

public:
    explicit TextEditor(QWidget *parent = 0);
    ~TextEditor();

private slots:
    void on_actionSave_as_triggered();

    void on_pushButton_clicked();

private:
    Ui::TextEditor *ui;
    void SaveFile();
    QString curFile;
};

#endif // TEXTEDITOR_H
