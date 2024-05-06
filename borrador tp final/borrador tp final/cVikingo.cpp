#pragma once
#include "cVikingo.h"
#include <iostream>
#include <string>
//#include "cDragon.h" //VER
using namespace std;

cVikingo::cVikingo(string nombre, string apellido, string posicion,string trabajo, int cantDterminados)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->posicion = posicion;
	this->trabajo = trabajo;
	this->cantDterminados = cantDterminados;

}

cVikingo::~cVikingo()
{
}

bool cVikingo::get_dragonesTerminados()
{
	if (cantDterminados >= 1)
	{
		return true;
	}
	else 
	{
		return false;
	}
	
	
}

void cVikingo::atacarDragones()
{
	cout << "vamos a atacar"; //ver como le informo a los otros vikingos
}

void cVikingo::trabajar(string trabajo)
{
	cout << "No molestar, estoy trabajando";
	cout << "mi trabajo es:" << trabajo;
}

int cVikingo::pelearDragon(cDragon* dragon)
{
	srand(time(0)); //PREGUNTAR A CUBA
	int numAleatorio = rand() % 100 + 1;  	// Genera un número aleatorio entre 1 y 100

	dragon.set_vida(numAleatorio);
	return 0;
}
