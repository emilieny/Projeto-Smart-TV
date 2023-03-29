#ifndef PRODUCAO_H
#define PRODUCAO_H

#include "Ator.h"
#include "Diretor.h"
#include "Pessoa.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Producao {
public:
    Producao(string n, vector<Ator> a, vector<Diretor> d, string t);

    string getNome() const{ return nome; }
    void setNome(string n) { nome = n; }
    void addAtor(Ator a) { atores.push_back(a); }
    void addDiretor(Diretor d) { diretores.push_back(d); }
    void removerAtor(Ator a);
    void removerDiretor(Diretor d);
    virtual void play() = 0;
    string getTipo() const { return tipo; }


protected:
    string nome;
    vector<Ator> atores;
    vector<Diretor> diretores;
    string tipo;
};

#endif