#include <iostream>

#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(string n) {
    setNome(n);
}

void Pessoa::imprimir() {
    cout << "Nome: " << getNome() << endl;
}