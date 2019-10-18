#include <iostream>
#include <bits/stdc++.h>

using namespace std;

struct PILA{
	int valor;
	PILA* abajo;
	
};
PILA *pila = NULL;
PILA *aux = NULL;

void ingresar_dato();
void eliminar_dato();
void mostrar_dato();

int main(){
	
	int	opc;
	do{
	system("cls");
	cout<<"1.- Ingresar datos\n";
	cout<<"2.- Borrar Ultimo dato ingresado\n";
	cout<<"3.- Mostrar Datos\n";
	cout<<"4.- Salir\n";
	cout<<"Opcion:";cin>>opc;
	switch(opc){
		case 1:
			system("cls");
			cout<<"Estas en ingresar datos\n";
			ingresar_dato();
			break;
		case 2:
			system("cls");
			cout<<"Eliminar Dato\n";
			eliminar_dato();
			break;
		case 3:
			system("cls");
			cout<<"Mostrar Datos!\n";
			mostrar_dato();
			break;
			
	}
}while(opc != 4);
	return 0;
}

void ingresar_dato(){
	int numero;
	cout<<"Ingresa un numero: ";cin>>numero;
	pila = new PILA();
	pila->valor = numero;
	pila->abajo = NULL;
	cout<<"\nIngresa un nuevo numero: ";cin>>numero;
	aux = new PILA();
	aux -> valor= numero;
	aux -> abajo= pila;
	pila = aux;
	cout<<"\nIngrese un nuevo numero: ";
	cin>>numero;
  	aux=new PILA(); 
  	aux->valor=numero; 
  	aux->abajo=pila; 
  	pila=aux;
  	
  	cout<<"Datos ingresados correctamente!\n";
  	system("pause");
	
}
void mostrar_dato(){
	cout<<"Mostrar dato!\n";
	cout<<"Los elementos son"<<endl;
 	cout<<pila->valor<<endl;
  	cout<<pila->abajo->valor<<endl;
  	cout<<pila->abajo->abajo->valor<<endl;
  	system("pause");
}

void eliminar_dato(){
  char opc;
  cout<<"¿Estas seguro que quieres eliminar el ultimo? (S/N)\n";
  cin>>opc;
  if( opc == 'S' || opc == 's'){
  	aux=pila;
  pila=pila->abajo;
  delete aux; 
  cout<<"Los Nuevos elementos son"<<endl;
  cout<<pila->valor<<endl;
  cout<<pila->abajo->valor<<endl;
  system("pause");
  }else{
  	cout<<"Abortando operacion!\n";
  	system("pause");
  }
  
}

