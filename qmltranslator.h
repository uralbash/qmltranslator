#ifndef QMLTRANSLATOR_H
#define QMLTRANSLATOR_H

#include <QtCore/QObject>
#include <QtCore/QSettings>
#include <QtCore/QTranslator>

class QmlTranslator : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString language READ language WRITE setTranslation NOTIFY languageChanged)

public:
    explicit QmlTranslator(QObject *parent = 0);

signals:
    void languageChanged();

public:
    Q_INVOKABLE void setTranslation(const QString language);

    QString language() const {
        return m_language;
    }

    void initFromSettings(QSettings *settings);

private:
    QTranslator m_translator;
    QString m_language = "en_EN";
};

#endif // QMLTRANSLATOR_H
