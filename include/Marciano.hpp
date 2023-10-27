#pragma once
#include<Dibujo.hpp>
#include<Actualizable.hpp>

class Marciano : public Dibujo, public Actualizable 
{
private:
public:
    Marciano() : Dibujo("NaveBichotaExtraterrestre")
    {
    }
    Marciano(int x, int y) : Dibujo(x, y, "NaveBichotaExtraterrestre")
    {
    }
    void DesplazarIzq(){
        this->x += -1;
    }
    void DesplazarDer(){
        this->x += 1;
    }
    void Actualizar(){
        this->x +=0;
        this->y +=0;
    }
  
    ~Marciano() {}
};