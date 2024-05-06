#pragma once
#include <iostream>
#include <string>
#include "cDragon.h" //VER
using namespace std;

class cVikingo
{
private:
	string nombre;
	string apellido;
	string posicion;
	string trabajo;
	int cantDterminados;

public:
	cVikingo(string nombre, string apellido, string trabajo,string poscion, int cantDterminados);
	~cVikingo();
	bool get_dragonesTerminados();
	void atacarDragones();
	void trabajar(string trabajo);
	int pelearDragon(cDragon* dragon);
};

