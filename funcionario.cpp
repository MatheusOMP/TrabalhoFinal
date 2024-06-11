#include "funcionario.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

using namespace std;
Funcionario::~Funcionario();
Funcionario::Funcionario(string id, string cpf, string nome):id(id), cpf(cpf), nome(nome){}

string Funcionario::setCPF(){
    
    string cpf;
    int i;


    entrada:
    cin >> cpf;

    try {

        if(cpf.size() != 14)
            throw invalid_argument("Tamanho de CPF invalido!");

        if(cpf.find_first_not_of("0123456789.-") != string::npos)
            throw invalid_argument("CPF invalido!");
    }
    
    catch(invalid_argument& e) {
        cout << e.what() << endl;
        
        goto entrada;
    }

    cout << "deu certo xd" << endl;
}





string Funcionario::setNome()
{
    return this->nome;
}


string Funcionario::setId()
{
    return this->id;
}