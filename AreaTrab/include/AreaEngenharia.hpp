#ifndef AREA_ENGENHARIA
#define AREA_ENGENHARIA

#include "../../Core/include/Setor.hpp"
#include "../../Core/include/funcionario.hpp"

class AreaEngenharia : public Setor{
    public:
        AreaEngenharia(Funcionario* Engenharia);
        ~AreaEngenharia();
        bool verificacao_de_acesso(Funcionario* Engenharia) override;
};

#endif