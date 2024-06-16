#include "../include/Exceptions.hpp"

InvalidCPF::InvalidCPF(std::string msg) : msg(msg) {}

std::string InvalidCPF::what() {

    return this->msg;
}