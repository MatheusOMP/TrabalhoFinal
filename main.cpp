#include "funcionario.hpp"
#include "Funcionarios.hpp"
#include "Setor.hpp"

#include <iostream>
using namespace std;

int main(){
    Funcionario* Carlos= new Engenheiro_de_softwere("123","12345678912345","Carlos");
    Setor* Engenharia= new Setor("Engenharia","321");
    Engenharia->PushFuncionario(Carlos);

    for (auto a:Engenharia*){
        cout<<a<<endl;
    }
}