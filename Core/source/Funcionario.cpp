#include "../include/Funcionario.hpp"
#include <iostream>

Funcionario::~Funcionario(){};

void Funcionario::setCPF(string cpf) {

    if(cpf.size() != 14)
        throw InvalidCPF("Tamanho de CPF invalido!\n");
    if(cpf.find_first_not_of("0123456789.-") != string::npos)
        throw InvalidCPF("Formato de CPF invalido!\n");
    this->cpf = cpf;
}

Funcionario::Funcionario(string cpf, string nome) :  nome(nome) {

    if(flag)
        count++;
    else {
        flag = true;
        count = 0;
    }
    id = count;

    try {

        setCPF(cpf);
    }

    catch(InvalidCPF &e) {

        std::cout << e.what() << std::endl;
    }

}

/*
string Funcionario::setCPF(){
    
    string cpf;
    int i;


    entrada:
    cin >> cpf;

    try {

        
            throw invalid_argument("Tamanho de CPF invalido!");

        
            throw invalid_argument("CPF invalido!");
    }
    
    catch(invalid_argument& e) {
        cout << e.what() << endl;
        
        goto entrada;
    }

    cout << "deu certo xd" << endl;
}
*/

string Funcionario::getCPF() {

    return this->cpf;
}



string Funcionario::getNome()
{
    return this->nome;
}


int Funcionario::getId()
{
    return this->id;
}