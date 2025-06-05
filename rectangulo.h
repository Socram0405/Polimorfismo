#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "Forma.h"

class rectangulo : public Forma {
private:
    int base, altura;

public:
    rectangulo();
    rectangulo(int X, int Y, int _base, int _altura);

    void setRectangulo(int _base, int _altura);
    
    int getBase();
    int getAltura();

    int perimetro() override;
    int area() override;
};

void CaseRectanguloArea(rectangulo r);
void CaseRectanguloPerim(rectangulo r);

#endif // RECTANGULO_H
