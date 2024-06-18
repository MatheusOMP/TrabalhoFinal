#include "../include/Exceptions.hpp"

InvalidCPF::InvalidCPF(std::string msg) {

    this->msg = msg;
}

std::string InvalidCPF::what() {

    return "CPF invalido: " + this->msg;
}


InvalidAccess::InvalidAccess(std::string msg) {

    this->msg = msg;
}

std::string InvalidAccess::what() {

    return "Acesso invalido: " + this->msg;
}

VectorFail::VectorFail(std::string msg) {

    this->msg = msg;
}

std::string VectorFail::what() {

    return "Falha no Vector: " + this->msg;
}