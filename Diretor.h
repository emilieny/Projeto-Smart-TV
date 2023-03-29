#ifndef DIRETOR_H
#define DIRETOR_H

#include "Pessoa.h"

class Diretor : public Pessoa {
public:
    Diretor(string n, int n_producoes);
    int getQtdProducoes() const{ return qtd_Producoes; }
    void setQtdProducoes(int n_producoes) { qtd_Producoes = n_producoes; }
    void imprimir();

protected:
    int qtd_Producoes;
};

#endif
