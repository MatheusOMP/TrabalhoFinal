#ifndef DESENVOLVEDOR_BACKEND
#define DESENVOLVEDOR_BACKEND

#include "..//Core//funcionario.hpp"

class Desenvolvedor_Backend:public Funcionario{
    public:
        Desenvolvedor_Backend(string id, string cpf, string nome);
        ~Desenvolvedor_Backend();
        int setMod(int modificador);
};

#endif