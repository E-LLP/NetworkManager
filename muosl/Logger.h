#ifndef LOGGER_H
#define LOGGER_H

namespace MUOSL {

class Logger
{
public:
    static bool s_isSaveToFile;
    Logger(QString name, bool isSaveToFile);
    static void MessageHandle(QtMsgType type, const QMessageLogContext &context, const QString &msg);
};

} // namespace MUOSL

#endif // LOGGER_H
