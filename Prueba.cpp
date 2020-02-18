#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stdio.h>
#define cel 30        //Elaboro: Adrian Alfredo Aguilar Hernandez   Software 2° 1
#include <stdio.h>
#include <locale.h>
using namespace std;

typedef struct TCliente{
    float id_cliente;
	string Nombre;
	float  saldo;
	bool ex,pin;
	int codigo;
	int mes, ano;

}cliente;

cliente Alta(cliente x);
cliente Baja(cliente w, cliente z);
void Impresion(cliente x);
cliente Modificar(cliente x);
float sueldo(cliente x);

int main(int argc, char** argv) {
	cliente a[10]; 
	int op, b=0, n=0,id_cliente=0;

	while(true){   
		float suma=0.0;
		system("cls");
		cout << "\t\t_____________Informacion de los Pintores__________\t\n" << "\n\t\t1.Alta\n\t\t2.Consulta\n\t\t3.Modificar\n\t\t5.Salir";
		cout<< "\n\t\tOpcion: ";
		cin >> op;
		switch(op){
			case 1:
				system("cls");
				a[n] = Alta(a[n]);
				n++;
				break;
			case 2:
				system("cls");
				for(int j=0;j<n;j++){
				Impresion(a[j]);
				}
				system("pause");
				break;
			case 3:
				system("cls");
				cout << "___________________________________";
				cout << "  Que registro desea modificar ? ";
				cout << "___________________________________";
					for(int j=0;j<n;j++){
				            Impresion(a[j]);                       				 	
				}
				cout << "\nId.Cliente: ";
				cin >> id_cliente;
				a[id_cliente-1]=Modificar(a[id_cliente-1]);
				break;
			case 5:
				exit(EXIT_FAILURE);
		}
	}
	return 0;
}
///Dar de Alta un Registro
cliente Alta(cliente x){
	char resp;
	cout << "Ingrese el Numero de Pintor:\n ";
	cin >> x.id_cliente;
	cout << "Ingrese Nombre:\n ";
	cin >> x.Nombre;
	cout << "¿Expone? S/N ";
	cin >> resp;  
	if((resp == 'S') || (resp == 's')){
		x.ex=true;
	}else{
		x.ex=false;
	}
	cout << "¿Pinta? S/N ";
	cin >> resp;  
	if((resp == 'S') || (resp == 's')){
		x.pin=true;
	}else{
		x.pin=false;
	}
	cout << "Ingresa Fecha de Servicio\n ";
	cout << "Ingresa mes:\n ";
	cin >> x.mes;
	cout << "Ingrese año:\n ";
	cin >> x.ano;
	return x;
}
//Consultar Lista
void Impresion(cliente x){
	cout << "\n_______________________\n";
	cout << "\nNo._Pintor: " << x.id_cliente;
	cout << "\nNombre: " << x.Nombre;
	cout << "\nExpone: ";
	if(x.ex == true){
		cout << "Expone\n ";
	}else{
		cout << "No expone\n ";
	}
	cout << "\nPinta: ";
	if(x.pin == true){
		cout << "Es Pintor\n ";
	}else{
		cout << "No es Pintor\n ";
	}
    cout << "Fecha de Servicio\n ";
	cout << "Ingresa mes(numero):\n "<< x.mes;
	cout << "Ingrese anio(numero):\n "<< x.ano;
     cout << "\n_______________________\n";
}
///Modificar un registro
cliente Modificar(cliente x){
	int op;
	char m;
	system("cls");
	cout << "Que campo desea modificar? \t\n1.Nombre\t\n2.Expone\t\n3.Pinta\t\n4.Mes\n\t\n5.Anio\n";
	cin >> op;
	switch(op){	
		case 1:
			cout << "\nNombre: ";
			cin >> x.Nombre;
			break;
		case 2:
			cout << "\nExpone S/N: ";
			cin >> m;
			if((m=='S')||(m=='s')){
				x.ex=true;
			}else{
				x.ex=false;
			}
			break;
	case 3:
			cout << "\nPinta S/N: ";
			cin >> m;
			if((m=='S')||(m=='s')){
				x.pin=true;
			}else{
				x.pin=false;
			}
			break;
	case 4:
			cout << "\nMes: ";
			cin >> x.mes;
			break;
	case 5:
			cout << "\nAnio: ";
			cin >> x.ano;
			break;
						
	}
	return x;
}
