#include <iostream>
#include <string>
#include <cstdio>
#include <Mascota.hpp>
int main(int argc, char const *argv[])
{

      Mascota m1;
      Mascota m2;
    // m1.comer();
    // m2.comer();
    std::cout << "int:" << sizeof(int) << std::endl;
    std::cout << "char:" << sizeof(char) << std::endl;
    std::cout << "bool:" << sizeof(bool) << std::endl;
    std::cout << "float:" << sizeof(float) << std::endl;
    std::cout << "double:" << sizeof(double) << std::endl;
    std::cout << "Mascota:" << sizeof(Mascota) << std::endl;

    std::cout << std::endl
              << std::endl;
    std::cout << "Direccion de memoria: " << sizeof(Mascota) << std::endl;
    int a = 7;
    std::cout <<"Tamaño:" << sizeof(a) << std::endl;
    std::cout<< "Contenido:" << a << std::endl;
    std::cout<< "Direccion:" << &a << std::endl;
    std::cout<< "Fin Mensaje:" << std::endl;

    void *puntero = malloc(32);
 
    std::cout << "Direccion de memoria: " << std::endl;
    std::cout << "size of:" << sizeof(puntero) << std::endl;
    std::cout << "puntero1:" << puntero << std::endl;
    std::cout << "puntero2:" << &puntero << std::endl;
    free(puntero);
   
 
    // C - Memoria dinamica
    std::cout << "Mascota en C:" << std::endl;
    Mascota *mascotaC = (Mascota *)malloc(sizeof(Mascota));
    mascotaC->Inicializar();
    mascotaC->DecirNombre();
    mascotaC->Destruir();
    free(mascotaC);
    //-----------------------------------------------------------------
    // C++
    std::cout << "Mascota en C++:" << std::endl;
    Mascota *mascotaCPP = new Mascota();
    mascotaCPP->DecirNombre();
    delete mascotaCPP;

    return 0;
}
