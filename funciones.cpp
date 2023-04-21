#include <iostream>
#include <fstream>

using namespace std;

int infoDia (int fecha,int opc, int ventas, int boletos,int costo, int kilometros, int calcular);
void chequeoBuses();


int infoDia (int fecha, int opc, int ventas, int boletos,int costo, int kilometros, int calcular){
   
    system ("cls");
    system ("color 07");
    cout << "Informacion del dia a dia" << endl;
    cout << "1. Calculadora de costo de boletos" << endl;
    cout << "2. Reporte del dia" << endl;
    cout << "3. Salir" << endl;
    cin >> opc;
    
    switch (opc)
    {
    case 1:
       system ("cls");
       system ("color 01");
       cout << "Calculadora de boletos" << endl;
       cout << "Dime la cantidad de boltos" << endl;
       cin >> boletos;
       cout << "Dime el costo que tiene este boleto" << endl;
       cin >> costo;
       calcular = boletos * costo;
       cout << "El costo total de los boletos es de C$ "<< calcular << endl;
       break;
       
    
    case 2:
        system ("cls");
       system ("color 03");
       cout << "Reporte del Dia" << endl;
       cout << "fecha: ";
       cin >> fecha;
       cout << "kilometros recorridos: ";
       cin >> kilometros;
       cout <<"ventas totales: ";
       cin >> ventas;
       cout << "Listo, tu reporte esta listo" << endl;
       break;
    
    case 3:
        return 0;

    default:
        break;
    }
}

void chequeoBuses(){

}
