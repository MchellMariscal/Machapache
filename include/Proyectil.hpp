#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Proyectil : public Dibujo, public Actualizable
{
private:
    int direccion;

public:
    Proyectil(int x, int y) : Dibujo(x, y, "bala")
    {
        this->direccion = 1;
    }
    ~Proyectil() {}
    void CambiarDireccion()
    {
        this->direccion *= -1;
    }
    void Actualizar()
    {
        this->x += this->direccion;
    }
};