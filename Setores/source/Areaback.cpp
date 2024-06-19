#include "../include/Areaback.hpp"

AreaBack::AreaBack() {}
AreaBack::~AreaBack(){}

void AreaBack::acessarSetor(Funcionario* funcionario) {
    try {
        if(verificacao_de_acesso(funcionario, this))
            std::cout << "Bem vindo ao backend" << std::endl;
    }
    catch(InvalidAccess& e) {
        std::cout << e.what() << std::endl;
    }
}