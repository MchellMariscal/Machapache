#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <list>
using namespace std;
class Disparar : public Dibujo
{
private:
    int numeroDisparos;

public:
    Disparar() : Dibujo("arma")
    {
        this->numeroDisparos = 5;
    }
    ~Disparar() {}
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
};