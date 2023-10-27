#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Bala : public Dibujo, public Actualizable
{
private:
int direccion;
public:
    Bala() : Dibujo("Bala")
    {
    }
    Bala(int x, int y) : Dibujo(x, y, "Bala")
    {
        this->direccion=1;
    }
    void CambiarDireccion(){
        this->direccion*=-1;
    }
    void DesplazarIzq()
    {
        this->x += -1;
    }
    void DesplazarDer()
    {
        this->x += 1;
    }
    void DesplazarAbajo()
    {
        this->y += 1;
    }
    void DesplazarArriba()
    {
        this->y += -1;
    }
    ~Bala() {}
    void Actualizar()
    {
        this->x += this->direccion;
    }
};