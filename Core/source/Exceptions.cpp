#include "../include/Exceptions.hpp"

InvalidCPF::InvalidCPF(std::string msg) : msg(msg) {}
InvalidCPF::InvalidCPF() : msg("error\n") {}

std::string InvalidCPF::what() {

    return this->msg;
}