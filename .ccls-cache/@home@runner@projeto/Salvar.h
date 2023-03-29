#ifndef SALVAR_H
#define SALVAR_H

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "App.h"
#include "Producao.h"
#include "Streaming.h"
#include "Time.h"
#include "Pessoa.h"
#include "Ator.h"
#include "Diretor.h"
#include "Estado.h"
#include <ostream>
#include "SmartTV.h"

using namespace std;

class Salvar
{
public:
    Salvar();
    bool salvarDados(vector<App*> apps, vector<Producao*> producoes, vector<Ator> atores, vector<Diretor> diretores, vector<SmartTV> smartTVs);
    bool carregarDados();
};

#endif