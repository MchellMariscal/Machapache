#include <Dibujo.hpp>
#include <Ventana.hpp>
#include <Marciano.hpp>
#include <list>
#include <curses.h>
#include <Escenario.hpp>
#include <Arma.hpp>


using namespace std;

int main(int argc, char const *argv[])
{
    Ventana ventana;
    Marciano  *marciano1= new Marciano(100,21)
    Escenario *escena1 = new Escenario(50,50);
    Arma *Bala=new Arma(100,20)
 

    list<Dibujo *> dibujos;
    dibujos.push_back(escena1 );
    

    list<Actualizable *> actualizables;
    actualizables.push_back(escena1 );
   
   
    while (true)  //descomentar solo si vcamos a meter dibujos q se muebvan
    {
       int key = getch();
        if (key == 'q' || key== 'Q')
        {
            //salir de juego
             break;
         }
         if (key == 'd' ||key==KEY_LEFT){
             monkey1->DesplazarIzquierda();
         }
         if (key== 'd'||key== KEY_RIGHT){
             monkey1->DesplazarDerecha();
         } 
         
    //     if ( key== KEY_UP){
    //        marciano1->DesplazarArriba();
    //         }
    //     if ( key==KEY_DOWN){
    //         marciano1->DesplazarAbajo();
    //     }
       
         
             if (key=='p')
         {
             bala->CambiarDireccion();
         }        
      

        
        refresh();
        ventana.Actualizar(actualizables);
        ventana.Dibujar(dibujos);
    }
    
}