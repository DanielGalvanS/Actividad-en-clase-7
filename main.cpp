#include <iostream>
#include <string>

#include "sum.h"
#include "sub.h"
#include "div.h"
#include "mult.h"
#include "operacion.h"

using std::cout;
using std::string;

void calculoOperacion(Operacion* op, float a, float b, string operacion) {
    cout << operacion << " = " << op->calcular(a, b) << '\n';
}

int main() {
    float floatA = 10;
    float floatB = 2;

    Sum sum;
    Sub sub;
    Div divide;
    Mult mult;

    calculoOperacion(&sum, floatA, floatB, "Suma");
    calculoOperacion(&sub, floatA, floatB, "Resta");
    calculoOperacion(&divide, floatA, floatB, "División");
    calculoOperacion(&mult, floatA, floatB, "Multiplicación");

    return 0;
}
