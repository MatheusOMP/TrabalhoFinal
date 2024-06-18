#ifndef SETOR
#define SETOR

#include "Funcionario.hpp"
#include <vector>
#include <string>
#include <iostream>

using std::string;

class Setor {
    private:
        static int count;
        int setorID;
        string nome;
    protected:
        std::vector <Funcionario*> Funcionarios_setor;
        Setor();
        ~Setor();
        void addFuncionario(Funcionario *funcionario);
        void rmFuncionario(Funcionario *funcionario);
        void mvFuncionario(Funcionario *funcionario, Setor *setor);
    public:
        virtual string getNome()=0;
        int getSetorID();
        std::vector<Funcionario*> getFuncionarios();
        virtual bool verificacao_de_acesso(Funcionario* funcionario) = 0;
};

#endif