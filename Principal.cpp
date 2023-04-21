#include <iostream>
#include "funciones.cpp"

using namespace std;

int main()
{
    while (1==1){
int fecha, opc,ventas,boletos,costo,kilometros,calcular,elegir=0;
system("cls");
cout << "*-TRANSPORTE DAVID-*" <<endl;
cout << "Escoge una de las opciones" << endl;
cout << "1. Informacion del dia a dia" << endl;
cout << "2. Informacion de buses" << endl;
cout << "3. Itinerario" << endl;
cout << "4. Salir" << endl;
cin >> elegir;

switch (elegir)
{
case 1:
    system ("cls");
    infoDia(fecha, opc,ventas,boletos,costo,kilometros,calcular);
    system ("pause");
    break;

default:
    break;
}

}
}