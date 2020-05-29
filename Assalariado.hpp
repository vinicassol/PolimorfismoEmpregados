//
//  Assalariado.hpp
//  PolimorfismoEmpregados
//
//  Created by Vini Cassol on 29/05/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#ifndef Assalariado_hpp
#define Assalariado_hpp

#include "Empregado.hpp"

class Assalariado : public Empregado
{
public:
    Assalariado();
    double vencimento();

private:
    double salario;
    
};

#endif /* Assalariado_hpp */
