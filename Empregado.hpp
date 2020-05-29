//
//  Empregado.hpp
//  PolimorfismoEmpregados
//
//  Created by Vini Cassol on 29/05/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#ifndef Empregado_hpp
#define Empregado_hpp

#include <iostream>
#include <string>
using namespace std;

class Empregado
{
    
public:
    virtual double vencimento() = 0; // cada classe derivada deve re-implementar
    
protected:
    string nome;
    string sobrenome;
    string cpf;
    
};

#endif /* Empregado_hpp */
