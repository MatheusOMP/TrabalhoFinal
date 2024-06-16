#ifndef AREA_FRONT
#define AREA_FORNT

#include "..//Core//Acesso.hpp"
#include "..//Core//funcionario.hpp"

class AreaFront : public Acesso{
    public:
        AreaFront(Funcionario* front);
        ~AreaFront();
        bool verificacao_de_acesso(Funcionario* front) override;
};

#endif