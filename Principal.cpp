#include <iostream>
#include "funciones.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int opc, elegir = 0;
    do
    {

        elegir = menu();

        switch (elegir)
        {
        case 1:
            system("cls");
            infoDia(opc);
            system("pause");
            break;

        default:
            cout << "Opcion digitada no es valida...\n";
            system("pause");
            break;
        }

    } while (opc != 4);
    return 0;
}