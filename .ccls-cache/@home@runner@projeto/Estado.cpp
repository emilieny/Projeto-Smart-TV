#include "Estado.h"
#include <iostream>

using namespace std;

Estado::Estado()
{
}

void Estado::guardarEstado(int estado)
{
    estados.push(estado);
}

void Estado::removerEstado()
{
    estados.pop();
}

int Estado::getEstado()
{
    return estados.top();
}