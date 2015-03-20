#include "Persona.h"
#include "PersonalAdministrativo.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

PersonalAdministrativo::PersonalAdministrativo(string nombre,string usuario,string contrasena,int edad,string id,string fecha_nacimiento,string clave_ingreso,string puesto)
	:Persona(nombre,usuario,contrasena,edad,id,fecha_nacimiento),clave_ingreso(clave_ingreso),puesto(puesto){
}
PersonalAdministrativo::PersonalAdministrativo(const PersonalAdministrativo& other)
	:Persona(other),clave_ingreso(other.clave_ingreso),puesto(other.puesto){
}
PersonalAdministrativo::~PersonalAdministrativo(){
}
string PersonalAdministrativo::toString()const{
	stringstream ss;
	ss << Persona::toString() << "\n\tClave Ingreso: " << clave_ingreso << "\n\tPuesto: " << puesto;
	return ss.str();
}
string PersonalAdministrativo::getClaveIngreso()const{
	return clave_ingreso;
}
string PersonalAdministrativo::getPuesto()const{
	return puesto;
}
void PersonalAdministrativo::setClaveIngreso(string clave_ingreso){
	this->clave_ingreso = clave_ingreso;
}
void PersonalAdministrativo::setPuesto(string){
	this->puesto = puesto;
}