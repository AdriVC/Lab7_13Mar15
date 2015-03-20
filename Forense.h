#ifndef FORENSE_H
#define FORENSE_H

#include <string>
#include "Persona.h"
using std::string;

class Forense:public Persona{
	string fecha_ingreso;
	string horario;
public:
	Forense(string,string,string,int,string,string,string);
	Forense(const Forense&);
	~Forense();
	virtual string toString()const;
	string getFechaIngreso()const;
	string getHorario()const;
	void setFechaIngreso(string);
	void setHorario(string);
};

#endif /*FORENSE_H */