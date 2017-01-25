#ifndef SERIALISIMO_H
#define SERIALISIMO_H

#include <QObject>
#include <QDebug>
#include <QtSerialPort/QSerialPort>

class Serialisimo : public QObject
{
    Q_OBJECT
public:
    explicit Serialisimo(QObject *parent = 0);

    Q_INVOKABLE void test();
    Q_INVOKABLE void iniciarSerial();
    Q_INVOKABLE void azulRGB();
    Q_INVOKABLE void rojoRGB();
    Q_INVOKABLE void apagartodo();
    Q_INVOKABLE void proyeccion();
    Q_INVOKABLE void escenaclases();

signals:

public slots:
};

#endif // SERIALISIMO_H
