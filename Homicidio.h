#ifndef HOMICIDIO_H
#define HOMICIDIO_H
#include "casos.h"
#include <string>
#using namespace std;

class Homicidio: public Casos{
	vector<string>sospechosos;
	string sospechoso_p;
	string culpable;
	string victima;
public:
	Homicidio(string, string, string): Casos(int,string,string,bool);
	string toString()const; 
	string getSospechoso_p()const;
	void setSospechoso_p(string);
	string getCulpable()const;
	void setCulpable(string);
	string getVictima()const;
	void setVictima(string);

}