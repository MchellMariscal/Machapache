#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <Marciano.hpp>
#include <Marc.hpp>
#include <list>
#include <curses.h>
#include <NavelasDivina.hpp>
#include <Escena.hpp>
#include <Proyectil.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Marciano *marciano1 = new Marciano(55, 1);
    Marciano *marciano2 = new Marciano(35, 1);
    Marciano *marciano3 = new Marciano(75, 1);
    Marc *marc1 = new Marc(50, 8);
    Marc *marc2 = new Marc(75, 8);
    Escenario *escenario2 = new Escenario(100, 1);
    Escenario *escenario1 = new Escenario(1, 1);
    Proyectil *bala = new Proyectil(55, 12);
    NavelasDivinas *navelasdivinas = new NavelasDivinas(50, 30);

    list<Dibujo *> dibujos;

    dibujos.push_back(marciano1);
    dibujos.push_back(marciano2);
    dibujos.push_back(marciano3);
    dibujos.push_back(marc1);
    dibujos.push_back(marc2);
    dibujos.push_back(escenario1);
    dibujos.push_back(bala);
    dibujos.push_back(navelasdivinas);
    dibujos.push_back(escenario2);

    list<Actualizable *> actualizables;

    actualizables.push_back(marciano1);
    actualizables.push_back(marciano2);
    actualizables.push_back(marciano3);
    actualizables.push_back(marc1);
    actualizables.push_back(marc2);
    actualizables.push_back(bala);
    actualizables.push_back(escenario1);
    actualizables.push_back(escenario2);
    actualizables.push_back(navelasdivinas);

    while (true) // descomentar solo si vcamos a meter dibujos q se muebvan
    {
        int key = getch();
        if (key == 'q' || key == 'Q')
        {
            // salir de juego
            break;
        }
        if (key == 'd' || key == KEY_LEFT)
        {
            navelasdivinas->DesplazarIzquierda();
        }
        if (key == 'd' || key == KEY_RIGHT)
        {
            navelasdivinas->DesplazarDerecha();
        }

        //     if ( key== KEY_UP){
        //        navelasdivinas->DesplazarArriba();
        //         }
        //     if ( key==KEY_DOWN){
        //         navelasdivinas->DesplazarAbajo();
        //     }

        if (key == 'p')
        {
            bala->CambiarDireccion();
        }

        refresh();
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }
}