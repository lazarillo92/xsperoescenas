#include <serialisimo.h>
#include <QtSerialPort/QSerialPort>
QSerialPort *serial;

Serialisimo::Serialisimo(QObject *parent) : QObject(parent)
{

}


void Serialisimo::test()
{
    qDebug()<< "Holi, soy C++";
}

void Serialisimo::iniciarSerial()
{

    qDebug()<< "inciar serial";
    serial = new QSerialPort(this);
    serial = new QSerialPort(this);
    serial->setPortName("/dev/ttyAMA0");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);
    //connect(serial,SIGNAL(readyRead()),this,SLOT(serialReceived()));

    /*
    serial = new QSerialPort(this);
    serial->setPortName("/dev/ttyAMA0");
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);
    serial->open(QIODevice::ReadWrite);
    */
    qDebug()<<"serial iniciado";


}

void Serialisimo::azulRGB()
{
    QByteArray b("7E001610010013A20040CAAE94FFFE000053010000FF0000009D");  //rojo
    QByteArray bytes= QByteArray::fromHex(b);
    serial->write(bytes);
    qDebug()<< "azul";
}

void Serialisimo::rojoRGB()
{
    QByteArray b("7E001610010013A20040CAAE94FFFE0000530100FF000000009D");  //rojo
    QByteArray bytes= QByteArray::fromHex(b);
    serial->write(bytes);
    qDebug()<< "rojo";
}

void Serialisimo::apagartodo()
{
    QByteArray rgb("7E001610010013A20040CAAE94FFFE000053010000000000009C");  //rojo
    QByteArray bytes= QByteArray::fromHex(rgb);
    serial->write(bytes);
    qDebug()<< "rgb apagado";

    QByteArray foco1("7E001610010013A20040C0E402FFFE0000530100000000000002");  //rojo
    bytes= QByteArray::fromHex(foco1);
    serial->write(bytes);
    qDebug()<< "foco1 apagado";

    QByteArray foco2("7E001610010013A20040C0E402FFFE0000530200000000000001");  //rojo
    bytes= QByteArray::fromHex(foco2);
    serial->write(bytes);
    qDebug()<< "foco2 apagado";

    QByteArray dimmer("7E001610010013A20040E946BCFFFE00005301000000000000BD");  //rojo
    bytes= QByteArray::fromHex(dimmer);
    serial->write(bytes);
    qDebug()<< "dimmer 0%";
}

void Serialisimo::proyeccion()
{
    //bajar cortina, apagar luces, encender proyector
    QByteArray rgb("7E001610010013A20040CAAE94FFFE000053010000FF0000009D");  //azul
    QByteArray bytes= QByteArray::fromHex(rgb);
    serial->write(bytes);
    qDebug()<< "rgb azul";

    QByteArray foco1("7E001610010013A20040C0E402FFFE00005301FF000000000003");
    bytes= QByteArray::fromHex(foco1);
    serial->write(bytes);
    qDebug()<< "foco1 prendido";

    QByteArray foco2("7E001610010013A20040C0E402FFFE0000530200000000000001");
    bytes= QByteArray::fromHex(foco2);
    serial->write(bytes);
    qDebug()<< "foco2 apagado";

    QByteArray dimmer("7E001610010013A20040E946BCFFFE000053016300000000005A");
    bytes= QByteArray::fromHex(dimmer);
    serial->write(bytes);
    qDebug()<< "dimmer 100%";
}

void Serialisimo::escenaclases()
{
    //subir cortina, prender luces, apagar poyector
    QByteArray rgb("7E001610010013A20040CAAE94FFFE0000530100FF000000009D");  //rojo
    QByteArray bytes= QByteArray::fromHex(rgb);
    serial->write(bytes);
    qDebug()<< "rgb apagado";

    QByteArray foco1("7E001610010013A20040C0E402FFFE00005301FF000000000003");  //rojo
    bytes= QByteArray::fromHex(foco1);
    serial->write(bytes);
    qDebug()<< "foco1 prendido";

    QByteArray foco2("7E001610010013A20040C0E402FFFE00005302FF000000000002");  //rojo
    bytes= QByteArray::fromHex(foco2);
    serial->write(bytes);
    qDebug()<< "foco2 prendido";

    QByteArray dimmer("7E001610010013A20040E946BCFFFE0000530124000000000099");  //rojo
    bytes= QByteArray::fromHex(dimmer);
    serial->write(bytes);
    qDebug()<< "dimmer 36%";

}
