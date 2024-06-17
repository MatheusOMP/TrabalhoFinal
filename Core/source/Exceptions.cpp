#include "../include/Exceptions.hpp"

InvalidCPF::InvalidCPF(std::string msg) {

    this->msg = msg;
}

std::string InvalidCPF::what() {

    return "CPF invalido: " + this->msg;
}