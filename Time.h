#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>

using namespace std;

#include "App.h"

class Hora : public App
{
    public:
        Hora();
        Hora(int Dia, int Mes, int Ano, int hora, int minuto, int segundo);
        void setDia(int Dia){this->Dia = Dia;} 
        int getDia()const{return Dia;} 
        void setMes(int Mes){this->Mes = Mes;} 
        int getMes()const{return Mes;} 
        void setAno(int Ano){this->Ano = Ano;} 
        int getAno()const{return Ano;} 
        void setHora(int hora){this->hora = hora;} 
        int getHora()const{return hora;} 
        void setMinuto(int minuto){this->minuto = minuto;} 
        int getMinuto()const{return minuto;} 
        void setSegundo(int segundo){this->segundo = segundo;} 
        int getSegundo()const{return segundo;} 
        void horaAtual(); 
        virtual void run() override;
        
    protected:
        int Dia; 
        int Mes;
        int Ano;
        int hora;
        int minuto;
        int segundo;
};

#endif