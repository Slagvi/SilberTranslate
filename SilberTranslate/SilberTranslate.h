#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SilberTranslate.h"
#include <QSignalMapper>

class SilberTranslate : public QMainWindow
{
	Q_OBJECT

public:
	SilberTranslate(QWidget *parent = Q_NULLPTR);

private:
	Ui::SilberTranslateClass ui;

	void loadDictionary();
	void loadGliphs();
	void translate();

	void initGliphs();
	void updateGliphs(int id);

	QMap<QString, QString> dict[2];
	QVector<QString> gliphs;
	QSignalMapper *signalMapper;

private slots:
	void clickedGliph(QString s);

	
};
