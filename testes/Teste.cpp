#include "include/Catch2.hpp"
#include "../Setores/include/AreaFront.hpp"
#include "../Setores/include/Areaback.hpp"
#include "../Setores/include/AreaEngenharia.hpp"
#include "../Funcionarios/include/DesenvBack.hpp"
#include "../Funcionarios/include/DesenvFront.hpp"
#include "../Funcionarios/include/DesenvFull.hpp"
#include "../Funcionarios/include/EngenheiroS.hpp"
#include "../Funcionarios/include/Estagiario.hpp"

#include <iostream>
using namespace std;

Funcionario* alguem = new Desenvolvedor_Backend("Eduardo","123.222.345-09");
Funcionario* alguem2 = new Desenvolvedor_Frontend("Monica","223.222.345-09");
Funcionario* alguem3 = new Desenvolvedor_Fullstack("Ricardo","523.222.345-09");
Funcionario* alguem4 = new Estagiario("Nicole","323.222.345-09");
Funcionario* alguem5 = new Engenheiro_de_software("Elonio","223.222.345-09");

TEST_CASE ("Testando Setores"){
    vector<Setor*> setores;

    setores.push_back(new AreaEngenharia());
    setores.push_back(new AreaFront());
    setores.push_back(new AreaBack());

    setores[0]->addFuncionario(alguem5);
    setores[1]->addFuncionario(alguem2);
    setores[2]->addFuncionario(alguem);
    setores[1]->addFuncionario(alguem4);
    setores[2]->addFuncionario(alguem3); 
    setores[1]->addFuncionario(alguem3);

    REQUIRE(setores[0]->getFuncionarios().size() == 1);
    REQUIRE(setores[1]->getFuncionarios().size() == 2);
    REQUIRE(setores[2]->getFuncionarios().size() == 2);

    setores[1]->mvFuncionario(alguem2, setores[0]);
    REQUIRE(setores[0]->getFuncionarios().size() == 2);
    REQUIRE(setores[1]->getFuncionarios().size() == 1);

    setores[1]->rmFuncionario(alguem4);
    REQUIRE(setores[1]->getFuncionarios().size() == 0);
    
}

TEST_CASE("Testando Funcionarios"){
    string nome,cpf;
    int id;
    nome=alguem2->getNome();
    cpf=alguem2->getCPF();
    id=alguem2->getId();
    REQUIRE(nome=="Monica");
    REQUIRE(cpf=="223.222.345-09");
    REQUIRE(id==2);
    alguem2->~Funcionario();
    REQUIRE(alguem2==nullptr);
}