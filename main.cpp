//
//  main.cpp
//  PolimorfismoEmpregados
//
//  Created by Vini Cassol on 29/05/20.
//  Copyright © 2020 Vini Cassol. All rights reserved.
//

#include "Assalariado.hpp"
#include "Comissionado.hpp"
#include "Horista.hpp"

int main() {
    
    Assalariado a;
    Comissionado c;
    Horista h;
    
    cout << " S A L A R I O S \n\n";
    cout << "Assalariado: " << a.vencimento() << endl;
    cout << "Comissionado: " << c.vencimento() << endl;
    cout << "Horista: " << h.vencimento() << endl;
    
    return 0;
}
