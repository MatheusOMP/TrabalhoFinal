#include "../include/Areafront.hpp"

AreaFront::AreaFront(Funcionario* front) {
    getNome()="Area de desenvolvimento frontend";
    if (verificacao_de_acesso(front)==true)
        std::cout<<"Bem vindo"<< std::endl;
    else
        std::cout<<"Entrada nao autorizada"<<std::endl;
}
AreaFront::~AreaFront() {}

bool AreaFront::verificacao_de_acesso(Funcionario* front) {
    try
    {
        if (front->modificadorAcesso==10 || front->modificadorAcesso==11){
            return true;
        }
        else throw InvalidAccess("Acesso negado, modificador invalido");
    }
    catch(InvalidAccess& e)
    {
        std::cout << e.what() << std::endl;
    }
}