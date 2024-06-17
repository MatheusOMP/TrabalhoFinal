#include "../include/DesenvBack.hpp"

Desenvolvedor_Backend::Desenvolvedor_Backend(string nome, string cpf):Funcionario(nome, cpf){}
Desenvolvedor_Backend::~Desenvolvedor_Backend(){};

int Desenvolvedor_Backend::setMod(){
    this->modificadorAcesso=01;
}