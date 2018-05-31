#include "SilberTranslate.h"
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QComboBox>

SilberTranslate::SilberTranslate(QWidget *parent)
	: QMainWindow(parent), dict{ {}, {} }
{
	ui.setupUi(this);

	connect(ui.closeBtn, &QPushButton::clicked, this, &SilberTranslate::close);
	connect(ui.translateBtn, &QPushButton::clicked, this, &SilberTranslate::translate);
	
	
	loadDictionary();
	loadGliphs();
	initGliphs();

	connect(ui.optionCombo, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &SilberTranslate::updateGliphs);
}


void SilberTranslate::loadDictionary()
{
	QString path("../data/Dict.zuo");
	QFile file(path);
	if (!file.open(QIODevice::ReadOnly)) {
		QMessageBox::information(0, "error", file.errorString());
	}

	QTextStream in(&file);
	in.setCodec("UTF-8");

	while (!in.atEnd()) {
		QString ver1 = in.readLine();
		QString ver2 = in.readLine();
		dict[0][ver1] = ver2;
		dict[1][ver2] = ver1;
	}

	file.close();
}


void SilberTranslate::loadGliphs()
{
	QString path("../data/gliphs.zuo");
	QFile file(path);
	if (!file.open(QIODevice::ReadOnly)) {
		QMessageBox::information(0, "error", file.errorString());
	}

	QTextStream in(&file);
	in.setCodec("UTF-8");

	while (!in.atEnd()) {
		QString gliph = in.readLine();
		gliphs.push_back(gliph);
	}

	file.close();
}


void SilberTranslate::initGliphs()
{
	signalMapper = new QSignalMapper(this);
	for (auto gliph : gliphs) {
		QPushButton *btn = new QPushButton();
		btn->setText(gliph);
		ui.gliffsLayout->addWidget(btn);

		connect(btn, SIGNAL(clicked()), signalMapper, SLOT(map()));
		signalMapper->setMapping(btn, gliph);
	}
	connect(signalMapper, SIGNAL(mapped(QString)), this, SLOT(clickedGliph(QString)));
}


void SilberTranslate::translate()
{
	ui.translatedLabel->setText(QStringLiteral("Brak t³umaczenia"));

	int opt = ui.optionCombo->currentIndex();
	QString textToTrans = ui.translateEdit->text();

	if (dict[opt].contains(textToTrans)) {
		ui.translatedLabel->setText(dict[opt][textToTrans]);
	}
}

void SilberTranslate::clickedGliph(QString s)
{
	ui.translateEdit->setText(ui.translateEdit->text().append(s));
}


void SilberTranslate::updateGliphs(int id) {
	ui.gliphsWidget->setVisible(id);
}