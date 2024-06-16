#ifndef AREA_BACK
#define AREA_BACK

#include "../Core/include/Acesso.hpp"
#include "../Core/include/funcionario.hpp"

class AreaBack : public Acesso{
    public:
        AreaBack(Funcionario* back);
        ~AreaBack();
        bool verificacao_de_acesso(Funcionario* back) override;
};

#endif