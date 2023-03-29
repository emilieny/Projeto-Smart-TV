#ifndef ESTADO_H
#define ESTADO_H

#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

class Estado
{
    public:
        Estado();
        void guardarEstado(int);
        int getEstado();
        void removerEstado();

    private:
        stack<int> estados;
};

#endif