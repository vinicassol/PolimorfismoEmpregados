//
//  Comissionado.cpp
//  PolimorfismoEmpregados
//
//  Created by Vini Cassol on 29/05/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include "Comissionado.hpp"

Comissionado::Comissionado()
{
    totalVendas = 500;
    taxaComissao = 10;
}

double Comissionado::vencimento()
{
    return (totalVendas + (totalVendas * taxaComissao)/100);
}
