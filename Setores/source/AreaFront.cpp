#include "../include/Areafront.hpp"

AreaFront::AreaFront() {}
AreaFront::~AreaFront(){}

void AreaFront::acessarSetor(Funcionario* funcionario) {
    try {
        if(verificacao_de_acesso(funcionario, this))
            std::cout << "Bem vindo ao frontend" << std::endl;
    }
    catch(InvalidAccess& e) {
        std::cout << e.what() << std::endl;
    }
}