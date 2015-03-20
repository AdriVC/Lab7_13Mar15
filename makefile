exe:	Main.o casos.o Evidencias.o Homicidio.o secuestro.o Persona.o Forense.o Investigador.o PersonalAdministrativo.o
	g++ Main.o casos.o Evidencias.o Homicidio.o secuestro.o Persona.o Forense.o Investigador.o PersonalAdministrativo.o -o exe
Main.o: Main.cpp casos.h Evidencias.h Homicidio.h secuestro.h Persona.h Forense.h Investigador.h PersonalAdministrativo.h
	g++ Main.cpp
Homicidio.o: Homicidio.h Homicidio.cpp casos.h
	g++ -c Homicidio.cpp
secuestro.o: secuestro.h secuestro.cpp casos.h
	g++ -c secuestro.cpp
casos.o: casos.h casos.cpp
	g++ -c casos.cpp
PersonalAdministrativo.o: PersonalAdministrativo.h PersonalAdministrativo.cpp Persona.h
	g++ -c PersonalAdministrativo.cpp
Investigador.o: Investigadores.h Investigador.cpp Persona.h
	g++ -c Investigador.cpp
Forense.o: Forense.h Forense.cpp Persona.h
	g++ -c Forense.cpp
Persona.o: Persona.h Persona.cpp
	g++ -c Persona.cpp
Evidencias.o: Evidencias.h Evidencias.cpp 
	g++ -c Evidencias.cpp



