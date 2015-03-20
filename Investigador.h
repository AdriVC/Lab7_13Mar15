#ifndef INVESTIGADOR_H
#define INVESTIGADOR_H

#include "Persona.h"
#include <string>
using std::string;

class Investigador:public Persona{
	int casos_atendidos;
	int casos_cerrados;
	int casos_sinResolver;
public:
	Investigador(string,string,string,int,string,string);
	Investigador(const Investigador&);
	~Investigador();
	virtual string toString()const;
	int getCasosAtendidos()const;
	int getCasosCerrados()const;
	int getCasosSinResolver()const;
	void setCasosAtendidos(int);
	void setCasosCerrados(int);
	void setCasosSinResolver(int);
};

#endif /*INVESTIGADOR_H*/

