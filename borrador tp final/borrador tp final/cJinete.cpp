#include "cJinete.h"

cJinete::cJinete(string nombre, string apellido, string apodo, string fnac, string caractFisicas, resulEntrenamiento resultado, int cantDragon)
{
	this->nombre = nombre;
	this->apellido = apellido;
	this->apodo = apodo;
	this->fnac = fnac;
	this->caractFisicas = caractFisicas;//cambiar
	this->resultado = resultado;
	this->cantDragones = cantDragones;
	list<cDragones*>misdragones;



}

cJinete::~cJinete()
{
}

void cJinete::set_dragon(cDragon* midragon)
{
	misdragones.push_back(midragon);
}

resulEntrenamiento cJinete::get_resultado()
{
	return this->resultado;
}

int cJinete::get_cantDragones()
{
	return this->cantDragones;
}
