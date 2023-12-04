#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Escenario : public Dibujo, public Actualizable
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
    void Actualizar()
    {
    }

    ~Escenario() {}
};