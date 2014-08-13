#include "texteditor.h"
#include "ui_texteditor.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>

TextEditor::TextEditor(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TextEditor)
{
    ui->setupUi(this);
}

TextEditor::~TextEditor()
{
    delete ui;
}

void TextEditor::on_actionSave_as_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(
                this,"Text Save Editor"
                ,"home/estalinbenitez/Documents",
                "Text File(*.txt);;All File (*.*)");
    curFile = fileName;
    if(!fileName.isEmpty()){
         curFile = fileName;
        SaveFile();

    }
}

void TextEditor::SaveFile()
{
    QFile file(curFile);
     if(file.open(QFile::WriteOnly)){
        file.write(ui->plainTextEdit->toPlainText().toUtf8());
      }else{
         QMessageBox::warning(this,
                     "Text editor",
                              tr("Cannon write file %1 /n Error %2").arg(curFile).arg(file.errorString()));

     }
}

void TextEditor::on_pushButton_clicked()
{
    Dialog *ventana = new Dialog(this);
    ventana->setModal(true);

    ventana->show();
}
