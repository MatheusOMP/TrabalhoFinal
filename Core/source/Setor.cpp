#include "../include/Setor.hpp"

int Setor::count = 0;

Setor::Setor(){
    
    this->setorID = count;
    count ++;
};

Setor::~Setor(){};

void Setor::addFuncionario(Funcionario* funcionario){

    try {
        this->Funcionarios_setor.push_back(funcionario);
    }

    catch(std::bad_alloc &e) {

        throw VectorFail("falha ao adicionar usuario");
    }
}

void Setor::rmFuncionario(Funcionario *funcionario) {

    std::vector<Funcionario*>::iterator it;
    int c = 0;
    Funcionario *f;

    for (it = Funcionarios_setor.begin(); it != Funcionarios_setor.end(); it++) {
        if ((*it)->getId() == funcionario->getId()) {

            f = *it;
            Funcionarios_setor.erase(it);
            f->~Funcionario();
            return;
        }
        else
            c++;
    }

    if(c == Funcionarios_setor.size())
        throw VectorFail("funcionario nao pertence a esse setor");
}

void Setor::mvFuncionario(Funcionario *funcionario, Setor *setor) {

    try {
        this->rmFuncionario(funcionario);
        setor->addFuncionario(funcionario);
    }

    catch(VectorFail &e) {

        std::cerr << e.what() << std::endl;
    }
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

bool Setor::verificacao_de_acesso(Funcionario *funcionario, Setor *setor) {

    for(auto f : setor->Funcionarios_setor)
        if(f->getId() == funcionario->getId())
            return true;
    
    throw InvalidAccess("funcionario nao pertence ao setor");
}