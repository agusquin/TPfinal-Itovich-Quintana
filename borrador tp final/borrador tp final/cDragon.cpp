#include "cDragon.h"
#include "cEstrategia.h"
#include <iostream>
using namespace std;

cDragon::cDragon(string nombre, string características, string tamaño, string color, bool estado, int vida, bool completo)
{
	this->nombre = nombre;
	this->características = características;
	this->tamaño = tamaño;
	this->color = color;
	this->estado = estado;
	this->vida = vida;
	this->completo = completo;
	jinete1 = nullptr;
	jinete2 = nullptr;
}

void cDragon::set_nombre(string nuevoNombre)
{
	nombre = nuevoNombre;
}

bool cDragon::get_domado()
{
	return this->estado;
}

void cDragon::set_entrenar(cEstrategia* estrategia)
{
	this->susEstrategias.push_back(estrategia);
}

void cDragon::set_baja()
{
	if (get_domado() == 0)//el dragon se murio
	{
		//cLibro recorre la lista de jinetes hasta que encuentra el dragon
		// --> lo elimina del jinete y de la isla 
	}
}

int cDragon::get_vida()
{
	return this->vida;
}

void cDragon::set_jinete(cJinete* jineteNuevo)
{
	if (jineteNuevo == nullptr) {
		// Manejar el caso cuando el jineteNuevo es nulo --> EXCEPCION !!!
		return;
	}
	if (jinete1 != nullptr && jinete2 != nullptr)
	{
		set_completo(true);
		return;
	}
	if (jinete1 == nullptr) //siempre agrego primero en jinete1 (en caso que no haya ninguno)
	{
		jinete1 = jineteNuevo;
	}
	else if (jinete2 == nullptr)
		jinete2 = jineteNuevo;
}

void cDragon::set_completo(bool completo)
{
	if (completo == true)
		completo = true;
	else
		completo = false;
}

void cDragon::set_vida(int vidaQuitada)
{
	vida = vida - vidaQuitada;
	if (vida == 0)
	{
		set_baja();
	}
}

cDragon::~cDragon()
{
}