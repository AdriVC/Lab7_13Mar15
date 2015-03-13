##ifndef CASOS_H
#define CASOS_H
#include <string>

class Casos{
	int num_caso;
	vector<Investigador*> investigators;
	vector<Evidencias*> evidence; 
	string hour,date; //hora y fecha del incidente
	bool closed; //caso cerrado?
public:
	Casos(int,vector <Investigador*>,vector <Evidencias*>,string,string,bool);
	Casos(const Casos&);
	string toString()const;
	void setNum_caso(int);
	int getNum_caso()const;
	void setHour(string);
	string getHour()const;
	void setDate(string)const;
	string get getDate();
	void setClosed(bool)const;
	bool getClosed();
};

#endif