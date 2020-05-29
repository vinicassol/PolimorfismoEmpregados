//
//  Horista.hpp
//  PolimorfismoEmpregados
//
//  Created by Vini Cassol on 29/05/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#ifndef Horista_hpp
#define Horista_hpp

#include "Empregado.hpp"

class Horista : public Empregado
{

public:
    Horista();
    double vencimento();
    
private:
    
    double precoHora;
    double horasTrabalhadas;
};

#endif /* Horista_hpp */
