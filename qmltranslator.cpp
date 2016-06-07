#include <QtWidgets/QApplication>

#include "qmltranslator.h"

QmlTranslator::QmlTranslator(QObject *parent) : QObject(parent) {}

void QmlTranslator::setTranslation(QString language)
{
    m_language = language;
    m_translator.load(language, ":/translations");
    qApp->installTranslator(&m_translator);
    emit languageChanged();
}


void QmlTranslator::initFromSettings(QSettings *settings)
{
    settings->beginGroup("Main");
    setTranslation(settings->value("language", "en_EN").toString());
    settings->endGroup();
}
