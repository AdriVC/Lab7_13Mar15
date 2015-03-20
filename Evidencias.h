#ifndef EVIDENCIAS_H
#define EVIDENCIAS_H
#include <string>
#using namespace std;

class Evidencias{
	string nombre;
	string arma;
	string lugar;
	bool huellas;
	bool procesada;
public:
	Evidencias(string,string,string,bool,bool);
	string toString ()const;
	string getNombre()const;
	string getArma()const;
	string getLugar()const;
	bool getHuellas()const;
	bool getProcesada()const;
	void setNombre(string);
	void setArma(string);
	void setLugar(string);
	void setHuellas(bool);
	void setProcesadas(bool);
};
#endif 