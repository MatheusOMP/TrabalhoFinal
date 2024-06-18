#include "../include/Estagiario.hpp"
#include <iostream>
#include <stdexcept>

Estagiario::Estagiario(string nome, string cpf):Funcionario(nome, cpf){}
Estagiario::~Estagiario(){}

int Estagiario::setMod(){
    try
    {
        std::cin>>modificadorAcesso;
        if(modificadorAcesso!=01 || modificadorAcesso!=10 || modificadorAcesso!=00){
            return modificadorAcesso;
        }
        else throw (InvalidAccess("Modificador de acesso invalido"));
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
        Estagiario::setMod();
    }
        

}