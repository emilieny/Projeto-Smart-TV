#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>

using namespace std;

class Pessoa {
public:
    Pessoa(string n );
    string getNome() const{ return nome; }
    void setNome(string n) { nome = n; }
    void imprimir();


protected:
    string nome;
};

#endif