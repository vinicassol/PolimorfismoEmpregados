//
//  Horista.cpp
//  PolimorfismoEmpregados
//
//  Created by Vini Cassol on 29/05/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include "Horista.hpp"

Horista::Horista()
{
    horasTrabalhadas = 160;
    precoHora = 25;
}

double Horista::vencimento()
{
    return horasTrabalhadas * precoHora;
}
