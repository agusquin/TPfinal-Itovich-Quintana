#pragma once
#include <iostream>
#include <list>
#include "cJinete.h"
#include "cEstrategia.h"
using namespace std;

class cDragon {
private:
	string nombre;
	string características;
	string tamaño;
	string color;
	bool estado;
	int vida;
	list <cEstrategia*> susEstrategias;
	bool completo; //si tiene dos jinetes--> completo=true
	cJinete jinete1;
	cJinete jinete2;
public:
	cDragon(string nombre, string características, string tamaño, string color, bool estado, int vida, bool completo);
	//no hace falta pasarle la lista porque esta se inicializa automaticamente en null--> nace sin estrategia
	void set_nombre(string nuevoNombre);
	bool get_domado();
	void set_entrenar(cEstrategia* estrategia); //le paso un puntero a una lista de estrategias
	void set_baja();
	int get_vida();
	void set_jinete(cJinete* jineteNuevo);
	void set_completo(bool completo);
	void set_vida(int vidaQuitada);
	~cDragon();
};
