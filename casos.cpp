#include "casos.h"
#include <string>
#include <sstream>
#include <vector>

using namespace std;

Casos::Casos(int num_caso,string hour,string date,bool closed):num_caso(num_caso),
hour(hour),date(date),closed(closed){
		vector<Investigator*> investigators;
		vector<Evidencias*> evidence; 
}

Casos::Casos(const Casos& other):num_caso(other.num_caso),hour(other.hour),
date(other.date),closed(other.closed){
	investigators = other.investigators;
	evidence = other.evidence;
}

string Casos::toString()const{
		stringstream ss;
		ss << "Caso Número: " << num_caso << " Hora: " << hour << " Fecha: " 
		<< date << " Caso Cerrado?: " << cerrado ;
		retrun ss.str();  	
}

void Casos::setNum_caso(int num_caso){
	this->num_caso = num_caso;
}

int Casos::getNum_caso()const{
	return num_caso;
}

void Casos::setHour(string hour){
	this->hour = hour;
}

string Casos::getHour()const{
	return hour;
}

void Casos::setDate(string date){
	this->date = date;
}	

string Casos::getDate()const{
	return date;
}

void Casos::setClosed(bool closed){
	this->closed = closed;
}

bool Casos::getClosed()const{
	return closed;	
}
