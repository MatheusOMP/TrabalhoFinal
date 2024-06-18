#ifndef DESENVOLVEDOR_FRONTEND
#define DESENVOLVEDOR_FRONTEND

#include "../../Core/include/Funcionario.hpp"

class Desenvolvedor_Frontend:public Funcionario{
    public:
        Desenvolvedor_Frontend(string nome, string cpf);
        ~Desenvolvedor_Frontend();
};

#endif