#ifndef DESENVOLVEDOR_FULLSTACK
#define DESENVOLVEDOR_FULLSTACK

#include "../../Core/include/Funcionario.hpp"

class Desenvolvedor_Fullstack:public Funcionario{
    public:
        Desenvolvedor_Fullstack(string nome, string cpf);
        ~Desenvolvedor_Fullstack();
};

#endif