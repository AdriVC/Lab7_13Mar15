#ifndef PERSONALADMINISTRATIVO_H
#define PERSONALADMINISTRATIVO_H

#include "Persona.h"
#include <string>
using std::string;

class PersonalAdministrativo:public Persona{
	string clave_ingreso;
	string puesto;
public:
	PersonalAdministrativo(string,string,string,int,string,string,string,string);
	PersonalAdministrativo(const PersonalAdministrativo&);
	~PersonalAdministrativo();
	virtual string toString()const;
	string getClaveIngreso()const;
	string getPuesto()const;
	void setClaveIngreso(string);
	void setPuesto(string);
};

#endif /*PERSONALADMINISTRATIVO_H*/