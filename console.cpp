#include "console.h"
#include "Salvar.h"
#include "SmartTV.h"
#include "App.h"
#include "Producao.h"
#include "Streaming.h"
#include "Time.h"
#include "Pessoa.h"
#include "Ator.h"
#include "Diretor.h"
#include "Estado.h"
#include "Serie.h"
#include "Filme.h"
#include <ostream>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>


using namespace std;

Console::Console()
{
  
}

void Console::run(vector<SmartTV> smartTVs)
{
    int opcao;
    bool sair = false;

    while(!sair)
    {
        for (int i = 0; i < smartTVs.size(); i++)
        {
            cout << i << " - " << smartTVs[i].getMarca() << " " << smartTVs[i].getModelo() << endl;
        }
        cout << "Digite o numero da TV: ";
        cin >> opcao;
        salvar.carregarDados();
        if (opcao == -1)
        {
            sair = true;
        }
        else
        {
            smartTVs[opcao].run("");
        }
}
}


void Console::main()
{
    SmartTV tv("Philco", "QLED", "Android");
    SmartTV tv2("LG", "LED", "Android");
    
    Streaming netflix("Netflix", "Brasil");
    Streaming disney("Disney+", "Brasil");
    Streaming amazon("Prime", "Brasil");

    Hora h1;

    Diretor d1("David Yates", 60);
    Diretor d2("Chris", 57);
    Diretor d3("Alfonso", 40);
    Diretor d4("Mike", 70);
    Diretor d5("José", 40);
    
    Ator a2("Daniel Radcliffe", "30 anos");
    Ator a3("Emma Watson", "27 anos");
    Ator a4("Rupert Grint ", "26 anos");
    Ator a5("Tom Felton", "30 anos");
    Ator a6("Matthew Lewis", "30 anos");
    Ator a7("James Phelps", "28 anos");
    Ator a8("Oliver Phelps", "19 anos");
    Ator a9("Bonnie Wrigh", "28 anos");
    Ator a10("Evanna Lynch", "40 anos");

    vector<Diretor> diretores{d1, d2, d3, d4};
    vector<Diretor> diretores1{d5};
    

    vector<Ator> atores{a2, a3, a4, a5, a6, a7, a8, a9, a10};
    vector<Ator> atores1{a2, a3, a4};
    
    
    Filme f1("Harry Potter e a pedra filosofal", atores, diretores, 175, "Filme");
    Filme f2("Harry Potter e a Câmara secreta", atores, diretores, 200, "Filme");
    Filme f3("Harry Potter e o prisioneiro de Azkaban", atores, diretores, 180, "Filme");

    Series s1("Anne with an E", atores1, diretores1, 30, "Serie");
    
    netflix << f1;
    netflix << f2;
    amazon << f3 << s1;
  
    tv << h1
        << netflix
        << disney
        << amazon;
    
    vector<Producao*> producoes{&f1, &f2, &f3, &s1};
    
    vector<App*> apps{&netflix, &disney, &amazon};

    vector<Diretor> diretoresTodos{d2, d3, d4, d5};
    
    vector<Ator> atoresTodos{a2, a3, a4, a5, a6, a7, a8, a9, a10};
    
    vector<SmartTV> tvs{tv, tv2};

    Salvar salvar;
    
    salvar.salvarDados(apps, producoes, atoresTodos, diretoresTodos, tvs);
    Console console;
    console.run(tvs);
}