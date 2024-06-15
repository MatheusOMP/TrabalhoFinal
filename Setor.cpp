#include "Setor.hpp"

Setor::Setor(string nome, string setorID):nome(nome),setorID(setorID){};
Setor::~Setor(){};

void Setor::PushFuncionario(Funcionario* Funcionario){
    this->Funcionarios_setor.push_back(Funcionario);
}

string Setor::setNome()
{
    return this->nome;
}


string Setor::set_setorID()
{
    return this->setorID;
}