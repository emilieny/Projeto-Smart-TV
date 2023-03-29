#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
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
#include "Salvar.h"

using namespace std;

class Console
{
public:
    Console();
    void run(vector<SmartTV>);
    void main();
    
protected:
    vector<SmartTV> smartTVs;
    vector<App*> apps;
    vector<Producao*> producoes;
    vector<Ator> atores;
    vector<Diretor> diretores;
    vector<Streaming> streamings;
    Salvar salvar;
};

#endif 