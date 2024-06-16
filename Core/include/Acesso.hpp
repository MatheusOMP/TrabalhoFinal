#ifndef ACESSO
#define ACESSO

#include "Funcionario.hpp"

class Acesso {
    protected:
        Acesso();
        ~Acesso();
        virtual bool verificacao_de_acesso(Funcionario* funcionario) = 0;
};

#endif