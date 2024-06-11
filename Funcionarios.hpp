#include "funcionario.hpp"
#include "Setor.hpp"

class Engenheiro_de_softwere:public Funcionario{
    public:
        Setor* setor;
    public:
        Engenheiro_de_softwere(string id, string cpf, string nome, Setor* setor){
            id=this->setId();
            cpf=this->setCPF();
            nome=this->setNome();
        }
        Setor* setSetor(){
            
        };
};

class Desenvolvedor_Backend:public Funcionario{};

class Desenvolvedor_Frontend:public Funcionario{};

class Desenvolvedor_Fullstack:public Funcionario{};

class Estagiario:public Funcionario{};

class Acesso_Backend{};

class Acesso_Frontend{};