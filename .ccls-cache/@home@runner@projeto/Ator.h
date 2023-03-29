#ifndef ATOR_H
#define ATOR_H

#include "Pessoa.h"
#include <string>
#include <iostream>

using namespace std;

class Ator : public Pessoa {
public:
    Ator(string n, string t);
    string getTempoDeCarreira() const{ return tempo_de_carreira; }
    void setTempoDeCarreira(string t) { tempo_de_carreira = t; }
    void imprimir();
protected:
    string tempo_de_carreira;
};

#endif