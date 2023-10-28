#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Marc : public Dibujo, public Actualizable

{
private:
    /* data */
public:
    Marc() : Dibujo("AlienBichota")
    {
    }
    Marc(int x, int y) : Dibujo(x, y, "AlienBichota")
    {
    }
    void Actualizar() //(MUEVE Al dibujo)
    {
        //      this->x +=1;
    }
    void DesplazarIzquierda()
    {
        this->x -= 1;
    }
    void DesplazarDerecha()
    {
        this->x += 1;
    }
    ~Marc() {}
};
