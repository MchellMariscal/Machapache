#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <Alma.hpp>


class Humano : public Dibujo, public Actualizable
{
private:
    Alma *alma1;
public:
    Humano() : Dibujo("Humano"){}
    Humano(int x, int y) : Dibujo(x, y, "Humano"){}
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
    void Actualizar()
    {
        this->x += 0;
        this->y += 0;
    }
    void Dibujar(){
        //clase superior
        Dibujo::Dibujar();
        //arma
        alma1->Dibujar();
    }
    void RecogerAlma(Alma* alma){
        this->alma1=alma;
    }
    ~Humano(){}
};