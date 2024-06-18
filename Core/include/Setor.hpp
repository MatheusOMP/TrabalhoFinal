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
        virtual void acessarSetor(Funcionario *Funcionario, Setor * setor) = 0;
    public:
        string getNome();
        int getSetorID();
        std::vector<Funcionario*> getFuncionarios();
        bool verificacao_de_acesso(Funcionario* funcionario, Setor *setor);
};

#endif