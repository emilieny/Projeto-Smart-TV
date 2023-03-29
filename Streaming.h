#ifndef STREAMING_H
#define STREAMING_H

#include "App.h"
#include "Producao.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;
using std::vector;

class Streaming : public App
{
    friend ostream &operator<<(ostream &out, Streaming &s);

public:
    Streaming(string nome, string versao);
    Streaming &operator << (Producao &p);
    Streaming &operator >> (Producao &p);
    virtual void run() override;
    
protected:
    vector<Producao*> producoes;
};

#endif