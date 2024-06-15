#ifndef AREA_BACK
#define AREA_BACK

#include "..//Core//Acesso.hpp"
#include "..//Core//funcionario.hpp"

class AreaBack : public Acesso{
    public:
        AreaBack(Funcionario* back);
        ~AreaBack();
        bool verificacao_de_acesso(Funcionario* back) override;
};

#endif