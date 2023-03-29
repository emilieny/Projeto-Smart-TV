#include "Salvar.h"
#include "App.h"
#include "Producao.h"
#include "Streaming.h"
#include "Time.h"
#include "Pessoa.h"
#include "Ator.h"
#include "Diretor.h"
#include "SmartTV.h"


Salvar::Salvar()
{
    
}

bool Salvar::salvarDados(vector<App*> apps, vector<Producao*> producoes, vector<Ator> atores, vector<Diretor> diretores, vector<SmartTV> smartTVs)
{
    ofstream arquivo;
    arquivo.open("dados.txt", ios::out);
    if(arquivo.is_open())
    {
        arquivo << smartTVs.size() << " " << "SmartTVs" << endl;

        for(int i = 0; i < smartTVs.size(); i++)
        {
            arquivo << smartTVs[i].getMarca() << " " << smartTVs[i].getModelo() << " " << smartTVs[i].get_versao_so() << endl;
        } 
        arquivo << endl;  
        arquivo << apps.size() << " " <<"Apps" << endl;
        for(int i = 0; i < apps.size(); i++)
        {
            arquivo << apps[i]->getNome() << " " << apps[i]->getVersao() << endl;
        }
        arquivo << endl; 
        arquivo << producoes.size() <<" " << "Producoes" << endl;
        for(int i = 0; i < producoes.size(); i++)
        {
            arquivo << producoes[i]->getTipo() << " " << producoes[i]->getNome() <<endl;  
        }
        arquivo << endl;  

        arquivo << atores.size() <<" " << "Atores" << endl;
        for(int i = 0; i < atores.size(); i++)
        {
            arquivo << atores[i].getNome() << " " << atores[i].getTempoDeCarreira() << endl;            
        }

        arquivo << endl; 

        arquivo << diretores.size() <<" " << "Diretores" << endl;
        for(int i = 0; i < diretores.size(); i++)
        {
            arquivo << diretores[i].getNome() << " " << diretores[i].getQtdProducoes() << endl;
        }

        arquivo << endl; 
         
        arquivo.close();
        return true;
    }
    else
    {
        return false;
    }
}

bool Salvar::carregarDados()
{
    ifstream arquivo;
    arquivo.open("dados.txt", ios::in);
    cout << endl;
    cout << "Carregando dados..." << endl;

    if(arquivo.is_open())
    {
        string linha;
        while(getline(arquivo, linha))
        {
            cout << linha << endl;
        }
        arquivo.close();
        return true;
    }
    else
    {
        return false;
    }
}