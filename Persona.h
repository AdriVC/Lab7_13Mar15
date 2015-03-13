#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using std::string;

class Persona{
	string nombre;
	string usuario;
	string contrasena;
	int edad;
	string id;
	string fecha_nacimiento;
public:
	Persona(string,string,string,int,string,string);
	Persona(const Persona&);
	virtual string toString()const;
	string getNombre()const;
	string getUsuario()const;
	string getContrasena()const;
	int getEdad()const;
	string getId()const;
	string getFecha_nacimiento()const;
	void setNombre(string);
	void setUsuario(string);
	void setContrasena(string);
	void setEdad(int);
	void setId(string);
	void setFecha_nacimiento(string);
	bool operator==(const Persona&)const;
};

#endif /*PERSONA_H */