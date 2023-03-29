#ifndef APP_H
#define APP_H
#include <iostream>
#include <string>
#include "Estado.h"

using namespace std;
class App
{
public:
    App(string nome, string versao): nome(nome), versao(versao){}
    void setNome(string){this->nome = nome;}
    void setVersao(string){this->versao = versao;}
    string getNome()const{return nome;}
    string getVersao()const{return versao;}
    virtual void run() = 0;
    protected:
    string nome;
    string versao;
};

#endif