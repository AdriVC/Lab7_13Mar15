#include "Evidencias.h"
#include <string>
#include <sstream>

using namespace std;

Evidencias::Evidencias(string nombre ,string arma ,string lugar ,bool huellas ,bool procesada){
	this->nombre = nombre;
	this->arma = arma;
	this->lugar = lugar;
	this->huellas = huellas;
	this->procesada = procesada;
}

string Evidencias::toString ()const{
	stringstream ss;
	ss<<nombre<<":"<<endl<<"\t Arma: "<<arma<<endl<<"\t Lugar: "<<lugar<<endl<<"\t Huellas?: "<<huellas<<endl<<"\t Procesada?: "<<procesada<<endl;
	return ss.str();
}

string Evidencias::getNombre()const{
	return nombre;
}

string Evidencias::getArma()const{
	return arma;
}

string Evidencias::getLugar()const{
	return lugar;
}

bool Evidencias::getHuellas()const{
	return huellas;
}

bool Evidencias::getProcesada()const{
	return procesada;
}

void Evidencias::setNombre(string nombre){
	this->nombre=nombre;
}

void Evidencias::setArma(string arma){
	this->arma=arma;
}

void Evidencias::setLugar(string lugar){
	this->lugar=lugar;
}

void Evidencias::setHuellas(bool huellas){
	this->huellas=huellas;
}

void Evidencias::setProcesadas(bool procesada){
	this->procesada=procesada;
}