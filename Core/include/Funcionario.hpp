#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <string>
#include "Exceptions.hpp"

using std::string;

class Funcionario : public InvalidCPF {
    private:
        int id;
        string cpf;
        string nome;
    public:
        int modificadorAcesso;
        static int count;

    private:
        void setCPF(string cpf);

    public:
        ~Funcionario();
        Funcionario(string nome, string cpf);
        int getId();
        string getCPF();
        string getNome();
};

#endif