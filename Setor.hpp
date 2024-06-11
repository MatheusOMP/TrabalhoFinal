#ifndef SETOR
#define SETOR

#include <string>

using std::string;

class Setor{
    public:
        string nome;
    protected:
        string setorID;
    public:
        Setor(string nome, string setorID);
        ~Setor();
        string setNome();
        string set_setorID();
};

#endif