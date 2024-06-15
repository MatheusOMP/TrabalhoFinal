#ifndef DESENVOLVEDOR_FULLSTACK
#define DESENVOLVEDOR_FULLSTACK

#include "..//Core/Funcionario.hpp/"

class Desenvolvedor_Fullstack:public Funcionario{
    public:
        Desenvolvedor_Fullstack(string id, string cpf, string nome);
        ~Desenvolvedor_Fullstack();
        int setMod(int modificador);
};

#endif