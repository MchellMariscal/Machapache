#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Marciano : public Dibujo, public Actualizable

{
private:
    /* data */
public:
    Marciano() : Dibujo("AlienMalaCopa")
    {
    }
    Marciano(int x, int y) : Dibujo(x, y, "AlienMalaCopa")
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
    ~Marciano() {}
};
