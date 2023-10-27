#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <Marciano.hpp>
#include <list>
#include <curses.h>
#include <Escenario.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Escenario *escena1 = new Escenario(10, 45);
    Marciano *marciano1 = new Marciano(0, 0);
    Marciano *marciano2 = new Marciano(100, 0);
    Marciano *marciano3 = new Marciano(50, 50);

    list<Dibujo *> dibujos;
    dibujos.push_back(marciano1 );
    dibujos.push_back(marciano2 );
    dibujos.push_back(marciano3 );

    list<Actualizable *> actualizables;
    actualizables.push_back(marciano1 );
    actualizables.push_back(marciano2 );
    actualizables.push_back(marciano3 );
   
    while (true)
    {
        int key = getch();
        if (key == 'q' || key == 'Q')
        {
            break;
        }
        if (key == 'a' || key == KEY_LEFT)
        {
            marciano1->DesplazarIzq();
        } 
        if (key == 'd' || key == KEY_RIGHT)
        {
            marciano1->DesplazarDer();
        } 
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
      
    }

    return 0;
}