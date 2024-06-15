#ifndef SETOR
#define SETOR

#include <vector>
#include "funcionario.hpp"

#include <string>

using std::string;

class Setor{
    public:
        string nome;
    protected:
        string setorID;
        std::vector <Funcionario*> Funcionarios_setor;
    public:
        Setor(string nome, string setorID);
        ~Setor();
        void PushFuncionario(Funcionario* Funcionario);
        string setNome();
        string set_setorID();
};

#endif