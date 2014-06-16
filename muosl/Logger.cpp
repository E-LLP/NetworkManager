#include "headers.h"
#include "muosl/Logger.h"

namespace MUOSL {

bool Logger::s_isSaveToFile = false;

Logger::Logger(QString name, bool isSaveToFile)
{
    Logger::s_isSaveToFile = isSaveToFile;

    qDebug() << "\n"
             << "######################################################\n"
             << "#\n"
             << "# Mu Online Second Life\n"
             << "# http://github.com/MuOnlineSecondLife\n"
             << "#\n"
             << "# Package:" << name << "| Log to file?: " << (isSaveToFile == true ? QString("yes") : QString("no")) << "\n"
             << "#\n"
             << "######################################################\n\n";

    qInstallMessageHandler(Logger::MessageHandle);
}

void Logger::MessageHandle(QtMsgType type, const QMessageLogContext &context, const QString &message)
{
    Q_UNUSED(context)

    QString outputMessage;

    QDateTime dateTime = QDateTime::currentDateTime();

    outputMessage = QString("[%1] -> ").arg(QString("%1").arg(dateTime.toString("dd.MM.yyyy hh:mm:ss")));
    QString filePath = QString("./logs/%1.log").arg(dateTime.toString("dd-MM-yyyy"));

    switch (type)
    {

        case QtDebugMsg:
            outputMessage.append(QString("%1\n").arg(message));
            break;

        case QtWarningMsg:
            outputMessage.append(QString("[Warning] %1\n").arg(message));
            break;

        case QtCriticalMsg:
            outputMessage.append(QString("[Critical] %1\n").arg(message));
            break;

        case QtFatalMsg:
            outputMessage.append(QString("[Fatal] %1\n").arg(message));
            break;

    }

    printf(outputMessage.toStdString().c_str());

    if(Logger::s_isSaveToFile == true)
    {
        QFile file(filePath);

        if(file.open(QIODevice::ReadWrite | QIODevice::Text) == true)
        {
            file.seek(file.size());
            QTextStream output(&file);
            output << outputMessage;
            file.close();
        }
    }
}

} // namespace MUOSL
