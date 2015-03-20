#include "Persona.h"
#include "Investigador.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Investigador::Investigador(string nombre,string usuario,string contrasena,int edad,string id,string fecha_nacimiento)
	:Persona(nombre,usuario,contrasena,edad,id,fecha_nacimiento),casos_atendidos(0),casos_cerrados(0),casos_sinResolver(0){
}
Investigador::Investigador(const Investigador& other)
	:Persona(other),casos_atendidos(other.casos_atendidos),casos_cerrados(other.casos_cerrados),casos_sinResolver(other.casos_sinResolver){
}
Investigador::~Investigador(){
}
string Investigador::toString()const{
	stringstream ss;
	ss << Persona::toString() << "\n\tCasos Atendidos: " << casos_atendidos << "\n\t Casos Cerrados: " << casos_cerrados << "\n\tCasos Sin Resolver: " << casos_sinResolver;
	return ss.str();
}
int Investigador::getCasosAtendidos()const{
	return casos_atendidos;
}
int Investigador::getCasosCerrados()const{
	return casos_cerrados;
}
int Investigador::getCasosSinResolver()const{
	return casos_sinResolver;
}
void Investigador::setCasosAtendidos(int casos_atendidos){
	this->casos_atendidos = casos_atendidos;
}
void Investigador::setCasosCerrados(int casos_cerrados){
	this->casos_cerrados = casos_cerrados;
}
void Investigador::setCasosSinResolver(int casos_sinResolver){
	this->casos_sinResolver = casos_sinResolver;
}