//
//  Assalariado.cpp
//  PolimorfismoEmpregados
//
//  Created by Vini Cassol on 29/05/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include "Assalariado.hpp"

Assalariado::Assalariado()
{
    salario = 1000;
}

double Assalariado::vencimento()
{
    return salario;
}
