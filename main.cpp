#include "Setores/include/AreaFront.hpp"
#include "Setores/include/Areaback.hpp"
#include "Setores/include/AreaEngenharia.hpp"

#include "Funcionarios/include/DesenvBack.hpp"
#include "Funcionarios/include/DesenvFront.hpp"
#include "Funcionarios/include/DesenvFull.hpp"
#include "Funcionarios/include/EngenheiroS.hpp"
#include "Funcionarios/include/Estagiario.hpp"


#include <iostream>
using namespace std;

int main() {

    vector<Setor*> setores;
    vector<Funcionario*> funcionarios;

    setores.push_back(new AreaEngenharia());
    setores.push_back(new AreaFront());
    setores.push_back(new AreaBack());

    setores[0]->addFuncionario(new Estagiario("rodrigo", "000.111.222-33"));
    setores[1]->addFuncionario(new Estagiario("marcio", "000.111.222-33"));
    setores[2]->addFuncionario(new Estagiario("daniel", "000.111.222-33"));
    
    funcionarios = setores[0]->getFuncionarios();

    for (auto f :funcionarios)
        cout << f->getNome() << endl;
    
    setores[0]->acessarSetor(setores[0]->getFuncionarios()[0]);
    setores[0]->acessarSetor(setores[1]->getFuncionarios()[0]);
    setores[1]->mvFuncionario(setores[1]->getFuncionarios()[0], setores[0]);
    setores[0]->acessarSetor(setores[0]->getFuncionarios()[1]);
    setores[0]->rmFuncionario(setores[0]->getFuncionarios()[0]);
    
    


}