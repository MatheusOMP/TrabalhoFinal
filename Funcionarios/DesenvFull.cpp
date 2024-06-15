#include "DesenvFull.hpp"

Desenvolvedor_Fullstack::Desenvolvedor_Fullstack(string id, string cpf, string nome):Funcionario(id, cpf, nome){}
Desenvolvedor_Fullstack::~Desenvolvedor_Fullstack(){};

int Desenvolvedor_Fullstack::setMod(int modificadorAcesso){
    this->modificadorAcesso=11;
}