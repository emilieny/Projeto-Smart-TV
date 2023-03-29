#include <iostream>
#include <string>
#include <iomanip>

#include "Time.h"
#include "App.h"

using namespace std;

Hora::Hora() : App("Hora", "1.0")
{
}

Hora::Hora(int Dia, int Mes, int Ano, int hora, int minuto, int segundo) : App("Hora", "1.0")
{
    this->Dia = Dia;
    this->Mes = Mes;
    this->Ano = Ano;
    this->hora = hora;
    this->minuto = minuto;
    this->segundo = segundo;
}

void Hora::horaAtual()
{
    time_t t = time(0);
    struct tm * now = localtime( & t );
    this->Dia = now->tm_mday;
    this->Mes = now->tm_mon + 1;
    this->Ano = now->tm_year + 1900;
    this->hora = now->tm_hour;
    this->minuto = now->tm_min;
    this->segundo = now->tm_sec;
}

void Hora::run()
{   
    horaAtual();
    cout << "Data: " << getDia() << "/" << getMes() << "/" << getAno() << endl;
    cout << "Hora: " << ( (getHora() == 0 || getHora() == 12) ? 12 : getHora() % 12) << ":" << setfill('0') << setw(2) << getMinuto() << ":" << setw(2) << getSegundo() << (getHora() < 12 ? " AM" : " PM") << endl;
}