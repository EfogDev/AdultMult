#include "settingswindow.h"
#include "ui_settingswindow.h"
#include "const.h"

SettingsWindow::SettingsWindow(QWidget *parent, MainWindow *w): QDialog(parent), ui(new Ui::Dialog) {
    ui->setupUi(this);

    settings = &w->settings;
    win = w;

    ui->comboBox->addItem("240p");
    ui->comboBox->addItem("360p");
    ui->comboBox->addItem("480p");
    ui->comboBox->addItem("720p");
    ui->comboBox->setCurrentIndex(settings->quality);

    ui->checkBox->setChecked(settings->onTop);

    QObject::connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(onCancelClicked()));
    QObject::connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(onSaveClicked()));
}

SettingsWindow::~SettingsWindow() {
    delete ui;
}

void SettingsWindow::onCancelClicked() {
    int result = QMessageBox::question(this, "Закрытие", "Сохранить настройки?", "Да", "Нет");
    switch (result) {
        case 0:
            onSaveClicked();
            break;
        case 1:
            close();
            break;
    }
}

void SettingsWindow::onSaveClicked() {
    settings->onTop = ui->checkBox->isChecked();
    settings->quality = ui->comboBox->currentIndex();
    settings->save(APPDIR + "settings.dat");
    close();
}
