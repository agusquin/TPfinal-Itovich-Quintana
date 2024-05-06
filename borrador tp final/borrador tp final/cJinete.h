#pragma once
#include <iostream>
#include <string>
#include <list>
//#include "cDragon.h" //VER
using namespace std;

enum resulEntrenamiento {
	no_asistio = 0,
	aprobado=1,
	desprobado = -1 ,
	primero=2, 
	segundo=3
};
class cJinete
{
	private:
	string nombre;
	string apellido;
	string apodo;
	string fnac; //REVISAR
	string caractFisicas; //CAMBIAR A ARRAY
	resulEntrenamiento resultado;
	int cantDragones; //cantidad de dragones que el jinete tiene asociados
	static int cantJinetesIsla;
	//HACER LISTA DE DRAGONES
	list<cDragones*>misdragones;



public:
	cJinete(string nombre, string apellido, string apodo, string fnac, string caractFisicas, resulEntrenamiento resultado, int cantDragon);
	~cJinete();
	void set_dragon(cDragon* midragon); // voy a tener que agregar a  mi lista
	resulEntrenamiento get_resultado();
	int get_cantDragones();
	//void set_cantDragones(int cantidadagregar,); esto no va -->agregamos de a uno.


};

