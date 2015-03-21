#include "Evidencias.h"
#include "Homicidio.h"
#include <string>
#include <sstream>

using namespace std;

Homicidio::Homicidio(string sospechoso_p, string culpable, string victima, int num_caso, string hour, string date, bool closed)
:Casos(num_caso,hour,date,closed), sospechoso_p(sospechoso_p), culpable(culpable), victima(victima){
	vector<string> sospechosos;
}

string Homicidio::toString()const{
	stringstream ss;
	ss<< Casos::toString()<< "\t Sospechoso Principal: "<<sospechoso_p<<endl;
	if (closed==true){
		ss<<"\t Culpable: "<<culpable<<endl;
	}
	ss<<"\t Victima: "<<victima<<endl;
	return ss.str();
}


string Homicidio::getSospechoso_p()const{
	return sospechoso_p;
}

void Homicidio::setSospechoso_p(string){
	this->sospechoso_p=sospechoso_p;
}

string Homicidio::getCulpable()const{
	return culpable;
}

void Homicidio::setCulpable(string){
	this->culpable=culpable;
}

string Homicidio::getVictima()const{
	return victima;
}

void Homicidio::setVictima(string){
	this->victima=victima;
}