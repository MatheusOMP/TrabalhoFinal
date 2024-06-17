#ifndef SETOR
#define SETOR

#include "Funcionario.hpp"
#include <vector>
#include <string>
#include <stdexcept>

using std::string;

class Setor {
    private:
        static int count;
        int setorID;
        string nome;
    protected:
        std::vector <Funcionario*> Funcionarios_setor;
        Setor(string nome);
        ~Setor();
        void addFuncionario(Funcionario* Funcionario);
    public:
        string getNome();
        int getSetorID();
        std::vector<Funcionario*> getFuncionarios();
};

#endif