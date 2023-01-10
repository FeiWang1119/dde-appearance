#include "appearance1.h"
#include "appearance1thread.h"

#include <QDBusMessage>

// 仅实现异步调用Appearance1Thread(属性等直接返回，复杂方法异步处理)
// Appearance1是Appearance1Adaptor的父对象，需在同一个线程中
Appearance1::Appearance1(QObject *parent)
    : QObject(parent)
    , appearance1Thread(new Appearance1Thread())
{
    registerScaleFactorsMetaType();
    connect(appearance1Thread.data(), SIGNAL(Changed(QString, QString)), this, SIGNAL(Changed(const QString &, const QString &)));
    connect(appearance1Thread.data(), SIGNAL(Refreshed(QString)), this, SIGNAL(Refreshed(const QString)));
}

Appearance1::~Appearance1()
{
}

QString Appearance1::background() const
{
    return appearance1Thread->background();
}

QString Appearance1::cursorTheme() const
{
    return appearance1Thread->cursorTheme();
}

double Appearance1::fontSize() const
{
    return appearance1Thread->fontSize();
}

void Appearance1::setFontSize(double value)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "setFontSize", Qt::QueuedConnection, Q_ARG(double, value));
}

QString Appearance1::globalTheme() const
{
    return appearance1Thread->globalTheme();
}

QString Appearance1::gtkTheme() const
{
    return appearance1Thread->gtkTheme();
}

QString Appearance1::iconTheme() const
{
    return appearance1Thread->iconTheme();
}

QString Appearance1::monospaceFont() const
{
    return appearance1Thread->monospaceFont();
}

double Appearance1::opacity() const
{
    return appearance1Thread->opacity();
}

void Appearance1::setOpacity(double value)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "setOpacity", Qt::QueuedConnection, Q_ARG(double, value));
}

QString Appearance1::qtActiveColor() const
{
    return appearance1Thread->qtActiveColor();
}

void Appearance1::setQtActiveColor(const QString &value)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "setQtActiveColor", Qt::QueuedConnection, Q_ARG(QString, value));
}

QString Appearance1::standardFont() const
{
    return appearance1Thread->standardFont();
}

QString Appearance1::wallpaperSlideShow() const
{
    return appearance1Thread->wallpaperSlideShow();
}

void Appearance1::setWallpaperSlideShow(const QString &value)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "setWallpaperSlideShow", Qt::QueuedConnection, Q_ARG(QString, value));
}

QString Appearance1::wallpaperURls() const
{
    return appearance1Thread->wallpaperURls();
}

int Appearance1::windowRadius() const
{
    return appearance1Thread->windowRadius();
}

void Appearance1::setWindowRadius(int value)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "setWindowRadius", Qt::QueuedConnection, Q_ARG(int, value));
}

void Appearance1::Delete(const QString &ty, const QString &name, const QDBusMessage &message)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "Delete", Qt::QueuedConnection, Q_ARG(QString, ty), Q_ARG(QString, name), Q_ARG(QDBusMessage, message));
}

QString Appearance1::GetCurrentWorkspaceBackground(const QDBusMessage &message)
{
    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "GetCurrentWorkspaceBackground", Qt::QueuedConnection, Q_ARG(QDBusMessage, message));
    return QString();
}

QString Appearance1::GetCurrentWorkspaceBackgroundForMonitor(const QString &strMonitorName, const QDBusMessage &message)
{
    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "GetCurrentWorkspaceBackgroundForMonitor", Qt::QueuedConnection, Q_ARG(QString, strMonitorName), Q_ARG(QDBusMessage, message));
    return QString();
}

double Appearance1::GetScaleFactor(const QDBusMessage &message)
{
    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "GetScaleFactor", Qt::QueuedConnection, Q_ARG(QDBusMessage, message));
    return 0.0;
}

ScaleFactors Appearance1::GetScreenScaleFactors(const QDBusMessage &message)
{
    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "GetScreenScaleFactors", Qt::QueuedConnection, Q_ARG(QDBusMessage, message));
    return ScaleFactors();
}

QString Appearance1::GetWallpaperSlideShow(const QString &monitorName, const QDBusMessage &message)
{
    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "GetWallpaperSlideShow", Qt::QueuedConnection, Q_ARG(QString, monitorName), Q_ARG(QDBusMessage, message));
    return QString();
}

QString Appearance1::GetWorkspaceBackgroundForMonitor(const int &index, const QString &strMonitorName, const QDBusMessage &message)
{
    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "GetWorkspaceBackgroundForMonitor", Qt::QueuedConnection, Q_ARG(int, index), Q_ARG(QString, strMonitorName), Q_ARG(QDBusMessage, message));
    return QString();
}

QString Appearance1::List(const QString &ty, const QDBusMessage &message)
{
    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "List", Qt::QueuedConnection, Q_ARG(QString, ty), Q_ARG(QDBusMessage, message));
    return QString();
}

void Appearance1::Reset(const QDBusMessage &message)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "Reset", Qt::QueuedConnection, Q_ARG(QDBusMessage, message));
}

void Appearance1::Set(const QString &ty, const QString &value, const QDBusMessage &message)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "Set", Qt::QueuedConnection, Q_ARG(QString, ty), Q_ARG(QString, value), Q_ARG(QDBusMessage, message));
}

void Appearance1::SetCurrentWorkspaceBackground(const QString &uri, const QDBusMessage &message)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "SetCurrentWorkspaceBackground", Qt::QueuedConnection, Q_ARG(QString, uri), Q_ARG(QDBusMessage, message));
}

void Appearance1::SetCurrentWorkspaceBackgroundForMonitor(const QString &uri, const QString &strMonitorName, const QDBusMessage &message)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "SetCurrentWorkspaceBackgroundForMonitor", Qt::QueuedConnection, Q_ARG(QString, uri), Q_ARG(QString, strMonitorName), Q_ARG(QDBusMessage, message));
}

void Appearance1::SetMonitorBackground(const QString &monitorName, const QString &imageGile, const QDBusMessage &message)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "SetMonitorBackground", Qt::QueuedConnection, Q_ARG(QString, monitorName), Q_ARG(QString, imageGile), Q_ARG(QDBusMessage, message));
}

void Appearance1::SetScaleFactor(double scale, const QDBusMessage &message)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "SetScaleFactor", Qt::QueuedConnection, Q_ARG(double, scale), Q_ARG(QDBusMessage, message));
}

void Appearance1::SetScreenScaleFactors(ScaleFactors scaleFactors, const QDBusMessage &message)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "SetScreenScaleFactors", Qt::QueuedConnection, Q_ARG(ScaleFactors, scaleFactors), Q_ARG(QDBusMessage, message));
}

void Appearance1::SetWallpaperSlideShow(const QString &monitorName, const QString &slideShow, const QDBusMessage &message)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "SetWallpaperSlideShow", Qt::QueuedConnection, Q_ARG(QString, monitorName), Q_ARG(QString, slideShow), Q_ARG(QDBusMessage, message));
}

void Appearance1::SetWorkspaceBackgroundForMonitor(const int &index, const QString &strMonitorName, const QString &uri, const QDBusMessage &message)
{
    //    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "SetWorkspaceBackgroundForMonitor", Qt::QueuedConnection, Q_ARG(int, index), Q_ARG(QString, strMonitorName), Q_ARG(QString, uri), Q_ARG(QDBusMessage, message));
}

QString Appearance1::Show(const QString &ty, const QStringList &names, const QDBusMessage &message)
{
    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "Show", Qt::QueuedConnection, Q_ARG(QString, ty), Q_ARG(QStringList, names), Q_ARG(QDBusMessage, message));
    return QString();
}

QString Appearance1::Thumbnail(const QString &ty, const QString &name, const QDBusMessage &message)
{
    message.setDelayedReply(true);
    QMetaObject::invokeMethod(appearance1Thread.get(), "Thumbnail", Qt::QueuedConnection, Q_ARG(QString, ty), Q_ARG(QString, name), Q_ARG(QDBusMessage, message));
    return QString();
}