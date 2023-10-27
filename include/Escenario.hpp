#pragma once
#include <Dibujo.hpp>
#include <iostream>

class Escenario : public Dibujo
{
private:
    /* data */
public:
    Escenario() : Dibujo("PantallaInicio")
    {
    }
    Escenario(int x, int y) : Dibujo(x, y, "PantallaInicio")
    {
    }
    ~Escenario() {}
};