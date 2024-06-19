#ifndef AREA_BACK
#define AREA_BACK

#include "../../Core/include/Setor.hpp"
#include "../../Core/include/funcionario.hpp"

class AreaBack : public Setor{
    public:
        AreaBack();
        ~AreaBack();
        void acessarSetor(Funcionario *Funcionario) override;
};

#endif