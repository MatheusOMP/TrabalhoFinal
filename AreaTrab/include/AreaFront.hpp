#ifndef AREA_FRONT
#define AREA_FORNT

#include "../Core/include/Acesso.hpp"
#include "../Core/include/funcionario.hpp"

class AreaFront : public Acesso{
    public:
        AreaFront(Funcionario* front);
        ~AreaFront();
        bool verificacao_de_acesso(Funcionario* front) override;
};

#endif