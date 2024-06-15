#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <string>

using std::string;

class Funcionario{
    private:
        string id;
        string cpf;
        string nome;
    public:
        int modificadorAcesso;
    public:
        Funcionario();
        ~Funcionario();
        Funcionario(string id, string cpf, string nome);
        string getId();
        string getCPF();
        string getNome();
};

#endif