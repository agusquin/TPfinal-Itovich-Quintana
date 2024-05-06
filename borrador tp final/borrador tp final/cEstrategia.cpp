#include "cEstrategia.h"

string cEstrategia::get_estrategiaAtaque()
{
    return this->estrategiaAtaque;
}

string cEstrategia::get_estrategiaDefensa()
{
    return this->estrategiaDefensa;
}

void cEstrategia::set_estrategiaAtaque(cEstrategia* estrategiaAcargar)
{
    estrategiaAtaque = estrategiaAcargar->estrategiaAtaque;
}

void cEstrategia::set_estrategiaDefensa(cEstrategia* estrategiaAcargar)
{
    estrategiaDefensa = estrategiaAcargar->estrategiaDefensa;
}