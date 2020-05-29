//
//  Comissionado.hpp
//  PolimorfismoEmpregados
//
//  Created by Vini Cassol on 29/05/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#ifndef Comissionado_hpp
#define Comissionado_hpp

#include "Empregado.hpp"

class Comissionado : public Empregado
{
    
public:
    Comissionado();
    double vencimento();
private:
    double totalVendas;
    double taxaComissao;
};

#endif /* Comissionado_hpp */
