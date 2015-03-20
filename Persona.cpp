#include "Persona.h"
#include <sstream>
#include <string>
using std::string;
using std::stringstream;

/*string nombre;
	string usuario;
	string contrasena;
	int edad;
	string id;
	string fecha_nacimiento;*/

Persona::Persona(string nombre, string usuario, string contrasena, int edad, string id, string fecha_nacimiento)
	:nombre(nombre),usuario(usuario),contrasena(contrasena),edad(edad),id(id),fecha_nacimiento(fecha_nacimiento){
}
Persona::Persona(const Persona& other)
	:nombre(other.nombre),usuario(other.usuario),contrasena(other.contrasena),edad(other.edad),id(other.id),fecha_nacimiento(other.fecha_nacimiento){
}
Persona::~Persona(){

}
string Persona::toString()const{
	stringstream ss;
	ss << nombre << "\n\tUsuario: " << usuario << "\n\tEdad: " << edad << "\n\tID: " << id << "\n\tFecha Nacimiento: " << fecha_nacimiento;
	return ss.str();
}
string Persona::getNombre()const{
	return nombre;
}
string Persona::getUsuario()const{
	return usuario;
}
string Persona::getContrasena()const{
	return contrasena;
}
int Persona::getEdad()const{
	return edad;
}
string Persona::getId()const{
	return id;
}
string Persona::getFecha_nacimiento()const{
	return fecha_nacimiento;
}
void Persona::setNombre(string nombre){
	this->nombre = nombre;
}
void Persona::setUsuario(string usuario){
	this->usuario = usuario;
}
void Persona::setContrasena(string contrasena){
	this->contrasena = contrasena;
}
void Persona::setEdad(int edad){
	this->edad = edad;
}
void Persona::setId(string id){
	this->id = id;
}
void Persona::setFecha_nacimiento(string fecha_nacimiento){
	this->fecha_nacimiento = fecha_nacimiento;
}
bool Persona::logIn(string usuario,string contrasena){
	return this->usuario == usuario && this->contrasena == contrasena;
}