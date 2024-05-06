#pragma once
#include <iostream>
using namespace std;

class cEstrategia {
private:
	string estrategiaAtaque;
	string estrategiaDefensa;
public:
	string get_estrategiaAtaque();
	string get_estrategiaDefensa();
	void set_estrategiaAtaque(cEstrategia* estrategiaAcargar);
	void set_estrategiaDefensa(cEstrategia* estrategiaAcargar);
};
