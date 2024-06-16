#include "DesenvFront.hpp"

Desenvolvedor_Frontend::Desenvolvedor_Frontend(string id, string cpf, string nome):Funcionario(id, cpf, nome){}
Desenvolvedor_Frontend::~Desenvolvedor_Frontend(){};

int Desenvolvedor_Frontend::setMod(int modificadorAcesso){
    this->modificadorAcesso=10;
}