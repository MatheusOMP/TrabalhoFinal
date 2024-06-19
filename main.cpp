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

    setores.push_back(new AreaEngenharia());
    setores.push_back(new AreaFront());
    setores.push_back(new AreaBack());

    //setores[0].

}