#ifndef AREA_FRONT
#define AREA_FORNT

#include "../../Core/include/Setor.hpp"
#include "../../Core/include/funcionario.hpp"

class AreaFront : public Setor{
    public:
        AreaFront();
        ~AreaFront();
        void acessarSetor(Funcionario *Funcionario, Setor *setor) override;
};

#endif