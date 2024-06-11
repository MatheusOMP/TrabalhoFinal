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
        Funcionario();
        ~Funcionario();
        Funcionario(string id, string cpf, string nome);
        string setId();
        string setCPF();
        string setNome();
};

#endif