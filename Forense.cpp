#include "Persona.h"
#include "Forense.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;


Forense::Forense(string nombre, string usuario,string contrasena,int edad,string id,string fecha_nacimiento,string fecha_ingreso)
	:Persona(nombre, usuario, contrasena, edad, id, fecha_nacimiento),fecha_ingreso(fecha_ingreso),horario("0"){
}
Forense::Forense(const Forense& other)
	:Persona(other),fecha_ingreso(other.fecha_ingreso),horario(other.horario){
}
Forense::~Forense(){
}
string Forense::toString()const{
	stringstream ss;
	ss << Persona::toString() << "\n\tFecha de Ingreso: " << fecha_ingreso << "\n\tHorario: " << horario;
	return ss.str();
}
string Forense::getFechaIngreso()const{
	return fecha_ingreso;
}
string Forense::getHorario()const{
	return horario;
}
void Forense::setFechaIngreso(string fecha_ingreso){
	this->fecha_ingreso =fecha_ingreso;
}
void Forense::setHorario(string horario){
	this->horario=horario;
}