#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class NavelasDivinas : public Dibujo, public Actualizable

{
private:
    /* data */
public:
    NavelasDivinas() : Dibujo("NaveLasDivinas")
    {
    }
    NavelasDivinas(int x, int y) : Dibujo(x, y, "NaveLasDivinas")
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
    ~NavelasDivinas() {}
};
