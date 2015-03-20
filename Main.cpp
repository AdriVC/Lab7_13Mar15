#include <iostream>
#include "Casos.h"
#include "Evidencias.h"
#include "Homicidio.h"
#include "Secuestro.h"
#include "Persona.h"
#include "Forense.h"
#include "Investigador.h"
#include "PersonalAdministrativo.h"

#using namespace std;
int menuPrincipal();
int Tipo_Cuenta();

int main(int argc, char* argv[]){
	vector <Persona*> personas;
	int op_prin;//int para el Menu Principal
	op_prin=menuPrincipal();
	switch(op_prin){
		case 1:{
			break;
		}
		case 2:{
			int cuenta=Tipo_Cuenta();
			cout<<"Ingrese su nombre real: ";
			string nom_real;
			cin>>nom_real;
			cout<<endl;
			cout<<"Ingrese su nombre de usuario: ";
			string nom_usu;
			cin>>nom_usu;
			cout<<endl;
			cout<<"Ingrese su contrasena: ";
			string contrasena;
			cin>>contrasena;
			cout<<endl;
			cout<<"Ingrese su edad: ";
			int edad;
			cin>>edad;
			cout<<endl;
			cout<<"Ingrese su cedula de identidad: ";
			string cedula;
			cin>>cedula;
			cout<<endl;
			cout<<"Ingrese su fecha de nacimiento: ";
			string fecha_nac;
			cin>>fecha_nac;
			cout<<endl;
			if (cuenta==1){
				cout<<"Ingrese su clave de ingreso al sistema: ";
				string clave;
				cin>>clave;
				cout<<endl;
				cout<<"Ingrese su puesto en el organigrama: ";
				string puesto;
				cin>>puesto;
				cout<<endl; 
				personas.push_back(new PersonalAdministrativo(nom_real,num_usu,contrasena,edad,cedula,fecha_nac,clave,puesto));
			}else if (cuenta==2){
				cout<<"Ingrese el numero de casos atendidos: ";
				int casos_a;
				cin>>casos_a;
				cout<<endl;
				cout<<"Ingrese el numero de casos cerrados: ";
				int casos_c;
				cin>>casos_c;
				cout<<endl;
				cout<<"Ingrese el numero de casos sin resolver: ";
				int casos_sr;
				cin>>casos_sr;
				cout<<endl;
				personas.push_back(new Investigador(nom_real,num_usu,contrasena,edad,cedula,fecha_nac,casos_a,casos_c,casos_sr));
			}else if (cuenta==3){
				cout<<"Ingrese la fecha de ingreso a la organizacion: ";
				string fecha_i;
				cin>>fecha_i;
				cout<<endl;
				cout<<"Ingrese su horario de trabajo: ";
				string horario;
				cin>>horario;
				cout<<endl;
				personas.push_back(new Forense(nom_real,num_usu,contrasena,edad,cedula,fecha_nac,fecha_i,horario));
			}//end if;
			break;
		}
	}

}

int menuPrincipal(){
	int opcion;
	cout<<"BIENVENIDO"<<endl;
	cout<<"1. Iniciar Sesion."<<endl;
	cout<<"2. Crear una Cuenta."<<endl;
	cout<<"Ingrese su opcion: ";
	cin>>opcion;
	cout<<endl;

	while (!(opcion==1||opcion==2)){
		cout<<"Opcion no valida."<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		cout<<endl;
	}//end while 
	return opcion;
}

int Tipo_Cuenta(){
	int opcion;
	cout<<"TIPOS DE CUENTA:"<<endl;
	cout<<"1. Personal Administrativo"<<endl;
	cout<<"2. Investigador"<<endl;
	cout<<"3. Forense"<<endl;
	cout<<"Ingrese su opcion: ";
	cin>>opcion;
	cout<<endl;

	while (!(opcion==1||opcion==2||opcion==3)){
		cout<<"Opcion no valida."<<endl;
		cout<<"Ingrese su opcion: ";
		cin>>opcion;
		cout<<endl;
	}//end while 
	return opcion;
}


