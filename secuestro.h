#ifndef SECUESTRO_H
#define SECUESTRO_H
#include "casos.h"
#include <string>

using namespace std;

class Secuestro: public Casos{
	string victim, lugar, motivo;
	bool rescate;
	int cantidad;
public:
	Secuestro(int,string,string,bool,string,string,string,bool,int);
	Secuestro(const Secuestro&);
	virtual string toString()const;
	void setVictim(string);
	string getVictim()const;
	void setLugar(string);
	string getLugar()const;
	void setMotivo(string);
	string getMotivo()const;
	void setRescate(bool);
	bool getRescate()const;
	int getCantidad()const;
};
#endif