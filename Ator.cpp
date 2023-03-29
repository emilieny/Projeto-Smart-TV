#include <iostream>
#include <string>
#include "Ator.h"
using namespace std;

Ator::Ator(string n, string t) : Pessoa(n) {
    setTempoDeCarreira(t);
}

void Ator::imprimir() {
    Pessoa::imprimir();
    cout << "Anos atuando: " << getTempoDeCarreira() << endl;
    cout << endl;
}