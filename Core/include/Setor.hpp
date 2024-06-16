#ifndef SETOR
#define SETOR

#include "Funcionario.hpp"
#include <vector>
#include <string>

using std::string;

class Setor{
    private:
        int setorID;
        string nome;
        static int count;
        static bool flag;
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