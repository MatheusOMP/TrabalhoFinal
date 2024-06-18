#ifndef ESTAGIARIO
#define ESTAGIARIO

#include "../../Core/include/Funcionario.hpp"


class Estagiario:public Funcionario{
    public:
        Estagiario(string nome, string cpf);
        ~Estagiario();
        int setMod() override;
};

#endif