#ifndef ESTAGIARIO
#define ESTAGIARIO

#include "../../Core/include/Funcionario.hpp"


class Estagiario:public Funcionario{
    public:
        Estagiario(string id, string cpf, string nome);
        ~Estagiario();
};

#endif