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

Persona(string nombre, string usuario, string contrasena, int edad, string id, string fecha_nacimiento)
	:nombre(nombre),usuario(usuario),contrasena(contrasena),edad(edad),id(id),fecha_nacimiento(fecha_nacimiento){
}
Persona(const Persona& other)
	:nombre(other.nombre),usuario(other.usuario),contrasena(other.contrasena),edad(other.edad),id(other.id),fecha_nacimiento(other.fecha_nacimiento){
}
string toString()const{
	stringstream ss;
	ss << nombre << "\n\tUsuario: " << usuario << "\n\tEdad: " << edad << "\n\tID: " << id << "\n\tFecha Nacimiento: " << fecha_nacimiento << endl;
	return ss.str();
}
string getNombre()const{
	return nombre;
}
string getUsuario()const{
	return usuario;
}
string getContrasena()const{
	return contrasena;
}
int getEdad()const{
	return edad;
}
string getId()const{
	return id;
}
string getFecha_nacimiento()const{
	return fecha_nacimiento;
}
void setNombre(string nombre)
	:nombre(nombre){
}
void setUsuario(string usuario)
	:usuario(usuario){
}
void setContrasena(string contrasena)
	:contrasena(contrasena){
}
void setEdad(int edad)
	:edad(edad){
}
void setId(string id)
	:id(id){
}
void setFecha_nacimiento(string fecha_nacimiento)
	:fecha_nacimiento(fecha_nacimiento){
}
bool operator==(const Persona& other)const{
	return usuario == other.usuario && contrasena == other.contrasena;
}