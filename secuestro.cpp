#include "secuestro.h"
#include "casos.h"
#include <string>
#include <sstream>

using namespace std;

	Secuestro::Secuestro(int num_caso,string hour, string date, bool closed, string victim, string lugar,string motivo, bool rescate, 
	int cantidad):Casos(num_caso,hour,date,closed), victim(victim), lugar(lugar), motivo(motivo), rescate(rescate), cantidad(cantidad){

	}

	Secuestro::Secuestro(const Secuestro& sec): Casos(sec),victim(sec.victim),lugar(sec.lugar),
	motivo(sec.motivo),rescate(sec.rescate),cantidad(sec.cantidad){

	}

	string Secuestro::toString()const{
		stringstream ss;
		ss << Casos::toString() << "\n\t Tipo de Caso: SECUESTRO \n\tVictima: " << victim << "\n\tLugar: " << lugar << 
		"\n\tMotivo: " << motivo << "\n\tRescate: " << (rescate?"SI":"NO");

		if(rescate){
			ss << "\n\tCantidad: " << cantidad;
		}

		return ss.str();
		
	}

	void Secuestro::setVictim(string victim){
		this->victim = victim;
	}

	string Secuestro::getVictim()const{
		return victim;
	}

	void Secuestro::setLugar(string lugar){
		this->lugar = lugar;
	}

	string Secuestro::getLugar()const{
		return lugar;
	}

	void Secuestro::setMotivo(string motivo){
		this->motivo = motivo;
	}

	string Secuestro::getMotivo()const{
		return motivo;
	}

	void Secuestro::setRescate(bool rescate){
		this->rescate = rescate;
	}

	bool Secuestro::getRescate()const{
		return rescate;
	}

	int Secuestro::getCantidad()const{
		return cantidad;
	}
