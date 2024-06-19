#ifndef AREA_ENGENHARIA
#define AREA_ENGENHARIA

#include "../../Core/include/Setor.hpp"
#include "../../Core/include/funcionario.hpp"

class AreaEngenharia : public Setor{
    public:
        AreaEngenharia();
        ~AreaEngenharia();
        void acessarSetor(Funcionario *Funcionario) override;
};

#endif