#ifndef FILME_H
#define FILME_H

#include "Producao.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Filme : public Producao {
public:
    Filme(string n, vector<Ator> a, vector<Diretor> d, double duracao, string t);
    double getDuracao() const{ return duracao; }
    void setDuracao(double d) { duracao = d; }
    virtual void play()override;
    

protected:
    double duracao;
};
    
#endif