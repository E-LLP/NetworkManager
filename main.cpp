#include "headers.h"
#include "main.h"
#include "muosl/NetworkManager.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    MUOSL::main(app.arguments());

    return app.exec();
}
