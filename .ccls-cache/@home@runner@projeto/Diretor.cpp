#include <iostream>
#include <string>
#include "Diretor.h"

using namespace std;

Diretor::Diretor(string n, int n_producoes) : Pessoa(n) {
    setQtdProducoes(n_producoes);
}

void Diretor::imprimir() {
    Pessoa::imprimir();
    cout << "Quantidade de produções: " << getQtdProducoes() << endl;
    cout << endl;
}