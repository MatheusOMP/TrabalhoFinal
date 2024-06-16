#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <string>
#include "Exceptions.hpp"

using std::string;

class Funcionario : public InvalidCPF {
    private:
        static int count;
        static bool flag;
        int id;
        string cpf;
        string nome;
    public:
        int modificadorAcesso;

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