#include <iostream>
#include <string>
#include <fstream>
#include <exception>
#include <vector>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <functional>
#include "SmartTV.h"
#include "App.h"
#include "Time.h"
#include "Estado.h"

using std::left, std::right;
using namespace std;


SmartTV::SmartTV(string marca, string modelo, string versao_so): marca(marca), modelo(modelo), versao_so(versao_so){
    ligada = false;
}
SmartTV &operator << (SmartTV &s, App &a)
{
    s.apps.push_back(&a);
    return s;
}
SmartTV &operator >> (SmartTV &s, App &a)
{
    for(int i = 0; i < s.apps.size(); i++)
    {
        if(s.apps[i] == &a)
        {
            s.apps.erase(s.apps.begin() + i);
        }
    }
    return s;
}

void SmartTV::run(string nome)
{
    menu();
    
}

void SmartTV::exibirApps()
{
    if(ligada)
    {
        while (true)
        {
            cout <<  endl;
            cout << endl <<"Apps instalados: " << endl;
            for(int i = 0; i < apps.size(); i++)
            {
                cout << setw(2) << i+1 << " - " << apps[i]->getNome() << endl;
            }
            cout << endl;
            cout << right;
            cout.fill('|');
            cout << "- Voltar " << endl;
            cout << "- Desligar " << endl;
            cout << endl;
                      
            string nome;
            
            cout << "Digite o nome da opção: ";
            try {
            
            cin >> nome;
            cout << endl;
            nome[0] = toupper(nome[0]);
            if (nome == "Desligar")
            {
                desligar();
            }
            else if (nome == "Voltar")
            {
                menu();
            }
            
            if (nome.empty()) {
            throw std::runtime_error("A string está vazia");
            }
            for (int i = 0; i < nome.length();i+=1){
                if (isdigit(nome[i])){
                    throw std::runtime_error("Você digitou um número e não o nome do app!!");
                    
                }
            }
            int sucess = 0;
            for (int i = 0; i < apps.size(); i++)
            {
                if(nome == apps[i]->getNome())
                {
                    apps[i]->run();
                    sucess = 1;
                }
                
            }
            if (sucess == 0)
            {
                throw std::runtime_error("App não encontrado!!");
            }
            }

            catch (std::runtime_error& e) {
           
            std::cout << "ERRO: " << e.what() << std::endl;
            } 
            catch (std::invalid_argument& e) {
            
            std::cout << "ERRO: " << e.what() << std::endl;
            }
            
        }
    }

    else if (!ligada)
    {
        cout << endl;
        cout << "TV DESLIGADA!" << endl;
        cout << endl;
    }
}



void SmartTV::ligar()
{
    ligada = true;
    cout << endl;
    cout << "A TV FOI LIGADA!" << endl;
    cout << endl;
    
    
    
}

void SmartTV::desligar()
{
    ligada = false;
    cout << endl;
    cout << "A TV FOI DESLIGADA!" << endl;
    cout << endl;
    exit (0);
}

void SmartTV::menu()
{
    while (true)
    {
        cout << "                      MENU" << endl;
    cout << endl;
    cout << "1 - Ligar" << endl;
    cout << "2 - Desligar" << endl;
    cout << "3 - Exibir apps" << endl;
    string opcao;
    bool opcaoValida = false;
    
    while (!opcaoValida)
    {
    cout << "Escolha uma opcao: ";
    cin >> opcao;
    if (opcao == "1")
    {
        opcaoValida = true;
        this->ligar(); 
    }
    else if (opcao == "2")
    {
        opcaoValida = true;
        this->desligar();
    }
    else if (opcao == "3")
    {
        opcaoValida = true;
        this->exibirApps();
    }
    else
    {   
        cout << "Opção inválida!" << endl;
        opcaoValida = false;
        }
        }
    }
    
}

void SmartTV::exibirAppsInstalados()
{
    cout << "Apps instalados: " << endl;
    for(int i = 0; i < apps.size(); i++)
    {
        cout << apps[i]->getNome() << endl;
        
    }
}