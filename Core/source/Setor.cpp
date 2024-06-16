#include "../include/Setor.hpp"

Setor::Setor(string nome) : nome(nome) {
    
    if(flag)
        count++;
    else {
        flag = true;
        count = 0;
    }
    setorID = count;
};

Setor::~Setor(){};

void Setor::addFuncionario(Funcionario* Funcionario){

    this->Funcionarios_setor.push_back(Funcionario);
}

string Setor::getNome()
{
    return this->nome;
}

int Setor::getSetorID()
{
    return this->setorID;
}

std::vector<Funcionario *> Setor::getFuncionarios() {
    
    return this->Funcionarios_setor;
}