#include "../include/DesenvFull.hpp"

Desenvolvedor_Fullstack::Desenvolvedor_Fullstack(string nome, string cpf):Funcionario(nome, cpf){}
Desenvolvedor_Fullstack::~Desenvolvedor_Fullstack(){};

int Desenvolvedor_Fullstack::setMod(){
    this->modificadorAcesso=11;
}