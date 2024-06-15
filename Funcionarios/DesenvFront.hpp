#ifndef DESENVOLVEDOR_FRONTEND
#define DESENVOLVEDOR_FRONTEND

#include "..//Core/Funcionario.hpp/"


class Desenvolvedor_Frontend:public Funcionario{
    public:
        Desenvolvedor_Frontend(string id, string cpf, string nome);
        ~Desenvolvedor_Frontend();
};

#endif