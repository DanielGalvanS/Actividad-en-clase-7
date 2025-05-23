#ifndef OPERACION_H
#define OPERACION_H

class Operacion{
    public:
        virtual float calcular(float a, float b) = 0;
        virtual ~Operacion() {}
};

#endif