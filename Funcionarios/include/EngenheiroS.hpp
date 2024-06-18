#include "../../Core/include/Funcionario.hpp"
#include "../../Core/include/Setor.hpp"

class Engenheiro_de_software:public Funcionario{
    public:
        Engenheiro_de_software(string nome, string cpf);
        ~Engenheiro_de_software();
        int setMod() override;
};