#ifndef ACESSO
#define ACESSO

#include "funcionario.hpp"

class Acesso {
    protected:
        Acesso();
        ~Acesso();
        virtual bool verificacao_de_acesso(Funcionario* funcionario)=0;
};

#endif