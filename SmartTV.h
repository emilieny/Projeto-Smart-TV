#ifndef SMARTTV_H
#define SMARTTV_H

#include "App.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Estado.h"

using std::vector;

class SmartTV 
{
    friend SmartTV &operator << (SmartTV &s, App &a );
    friend SmartTV &operator >> (SmartTV &s, App &a);
public:
    SmartTV(string marca, string modelo, string versao_so);
    void run(string);
    void ligar();
    virtual void desligar();
    void exibirApps();
    void exibirAppsInstalados();
    void menu();

    string getMarca() const{ return marca; }
    string getModelo() const{ return modelo; }
    string get_versao_so() const{ return versao_so; }
    

protected:
    vector<App*> apps;
    string marca;
    string modelo;
    string versao_so;
    bool ligada;
    Estado estado;
};

#endif