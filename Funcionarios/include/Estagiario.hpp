#ifndef ESTAGIARIO
#define ESTAGIARIO

#include "..//Core/Funcionario.hpp/"


class Estagiario:public Funcionario{
    public:
        Estagiario(string id, string cpf, string nome);
        ~Estagiario();
};

#endif