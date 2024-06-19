#include "AreaTrab/include/AreaFront.hpp"
#include "AreaTrab/include/Areaback.hpp"
#include "AreaTrab/include/AreaEngenharia.hpp"

#include "Funcionarios/include/DesenvBack.hpp"
#include "Funcionarios/include/DesenvFront.hpp"
#include "Funcionarios/include/DesenvFull.hpp"
#include "Funcionarios/include/EngenheiroS.hpp"
#include "Funcionarios/include/Estagiario.hpp"


#include <iostream>
using namespace std;

int main() {

    vector<Setor*> setores;

    setores.push_back(new AreaEngenharia());
    setores.push_back(new AreaFront());
    setores.push_back(new AreaBack());

    //setores[0].

}