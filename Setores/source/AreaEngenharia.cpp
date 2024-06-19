#include "../include/AreaEngenharia.hpp"

AreaEngenharia::AreaEngenharia() {}
AreaEngenharia::~AreaEngenharia(){}

void AreaEngenharia::acessarSetor(Funcionario* funcionario) {
    try {
        if(verificacao_de_acesso(funcionario, this))
            std::cout << "Bem vindo a engenharia" << std::endl;
    }
    catch(InvalidAccess& e) {
        std::cout << e.what() << std::endl;
    }
}