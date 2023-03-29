#include <iostream>
#include <string>
#include "Producao.h"

using namespace std;

Producao::Producao(string n, vector<Ator> a, vector<Diretor> d, string t) {
    setNome(n);
    for (int i = 0; i < a.size(); i++) {
        atores.push_back(a[i]);
    }
    for (int i = 0; i < d.size(); i++) {
        diretores.push_back(d[i]);
    }
    tipo = t;
    
}

void Producao::removerAtor(Ator a) {
    for (int i = 0; i < atores.size(); i++) {
        if (a.getNome() == atores[i].getNome()) {
            atores.erase(atores.begin() + i);
        }
    }
}

void Producao::removerDiretor(Diretor d) {
    for (int i = 0; i < diretores.size(); i++) {
        if (d.getNome() == diretores[i].getNome()) {
            diretores.erase(diretores.begin() + i);
        }
    }
}