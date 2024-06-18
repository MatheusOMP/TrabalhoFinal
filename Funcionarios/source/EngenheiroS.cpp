#include "../include/EngenheiroS.hpp"

Engenheiro_de_software::Engenheiro_de_software(string nome, string cpf):Funcionario(nome, cpf){}
Engenheiro_de_software::~Engenheiro_de_software(){};

int Engenheiro_de_software::setMod(){
    this->modificadorAcesso=00;
}