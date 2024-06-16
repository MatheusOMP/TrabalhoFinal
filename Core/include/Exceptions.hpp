#ifndef EXCEPTIONS
#define EXCEPTIONS

#include <stdexcept>


class InvalidCPF : public std::exception {
    private:
        std::string msg;
    public:
        InvalidCPF(std::string msg);
        InvalidCPF();
        std::string what();
};

#endif