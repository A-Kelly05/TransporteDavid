#include <iostream>
#include <fstream>

using namespace std;

int menu();
int infoDia(int opc);
int chequeoBuses();

int menu()
{
    int elegir;
    system("cls");
    system("color 07");
    cout << "*-TRANSPORTE DAVID-*" << endl;
    cout << "Escoge una de las opciones\n";
    cout << "1. Informacion del dia a dia\n";
    cout << "2. Informacion de buses\n";
    cout << "3. Itinerario\n";
    cout << "4. Salir\n";
    cout << "Digita la opcion: ";
    cin >> elegir;
    return elegir;
}

int infoDia(int opc)
{
    do{
    system("cls");
    system("color 01");
    cout << "Informacion del dia a dia" << endl;
    cout << "1. Calculadora de costo de boletos" << endl;
    cout << "2. Reporte del dia" << endl;
    cout << "3. Salir" << endl;
    cin >> opc;

    switch (opc)
    {
    case 1:
        int boletos, costo, calcular;
        system("cls");
        system("color 03");
        cout << "Calculadora de boletos" << endl;
        cout << "Dime la cantidad de boltos" << endl;
        cin >> boletos;
        cout << "Dime el costo que tiene este boleto" << endl;
        cin >> costo;
        calcular = boletos * costo;
        cout << "El costo total de los boletos es de C$ " << calcular << endl;
        system("pause");
        break;
    
    case 3:
        return 0;
    
    
    default:
        break;
    
    case 2:
        int fecha, kilometros, ventas;
        system("cls");
        system("color 03");

        string nombreArchivo = "Reporte.txt";
        ofstream archivo;

        archivo.open(nombreArchivo.c_str(), fstream::out);

        cout << "Reporte del Dia" << endl;
        archivo << "Reporte del Dia" << endl;
        cout << "fecha: ";
        archivo << "fecha: ";
        cin >> fecha;
        archivo << fecha << endl;
        cout << "kilometros recorridos: ";
        archivo << "kilometros recorridos: ";
        cin >> kilometros;
        archivo << kilometros<< endl;
        cout << "Ventas totales: ";
        archivo << "Ventas totales: ";
        cin >> ventas;
        archivo << ventas << endl;
        archivo.close();
		cout << "Escrito correctamente"<< endl;
        system("pause");
        break;
    
    
    }
    
    }while(opc !=3);
    return 0;
}

int chequeoBuses()
{
    return 0;
}