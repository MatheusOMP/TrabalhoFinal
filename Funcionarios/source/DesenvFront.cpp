#include "../include/DesenvFront.hpp"

Desenvolvedor_Frontend::Desenvolvedor_Frontend(string nome, string cpf):Funcionario(nome, cpf){}
Desenvolvedor_Frontend::~Desenvolvedor_Frontend(){};

int Desenvolvedor_Frontend::setMod(){
    this->modificadorAcesso=10;
}