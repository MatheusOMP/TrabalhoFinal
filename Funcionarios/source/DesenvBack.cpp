#include "DesenvBack.hpp"

Desenvolvedor_Backend::Desenvolvedor_Backend(string id, string cpf, string nome):Funcionario(id, cpf, nome){}
Desenvolvedor_Backend::~Desenvolvedor_Backend(){};

int Desenvolvedor_Backend::setMod(int modificadorAcesso){
    this->modificadorAcesso=01;
}