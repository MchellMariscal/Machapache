#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <iostream>
class Arma : public Dibujo, public Actualizable
{
private:
    int numeroDisparos;

public:
    Arma() : Dibujo("Arma")
    {
        this->numeroDisparos = 5;
    }
    Arma(int x, int y) : Dibujo(x,y,"Arma")
    {
        this->numeroDisparos = 5;
    }
    void Actualizar()
    {
    }
    void Recargar()
    {
        this->numeroDisparos = 5;
    }
    void Disparar()
    {
        if (this->numeroDisparos > 0)
        {
            this->numeroDisparos -= 1;
        }
    }
    ~Arma(){}
};