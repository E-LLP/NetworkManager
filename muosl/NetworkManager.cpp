#include "headers.h"
#include "muosl/NetworkManager.h"
#include "muosl/Logger.h"

namespace MUOSL {

void main(QStringList args)
{
    args.clear(); // UNUSED at now

    new Logger(QString("NetworkManager"), false);

    qDebug() << "Application started";
}

} // namespace MUOSL
