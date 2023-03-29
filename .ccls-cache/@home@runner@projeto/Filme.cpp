#include <iostream>
#include <string>
#include "Filme.h"

using namespace std;

Filme::Filme(string n, vector<Ator> a, vector<Diretor> d, double dura, string t) : Producao(n, a, d, t) {
    setDuracao(dura);
}

void Filme::play() {
    cout << "Filme: " << getNome() << endl;
    cout << "Atores: " << endl;
    for (int i = 0; i < atores.size(); i++) {
        atores[i].imprimir();
    }
    cout << "Diretores: " << endl;
    for (int i = 0; i < diretores.size(); i++) {
        diretores[i].imprimir();
    }
    cout << "Duração: " << getDuracao() << endl;
}
