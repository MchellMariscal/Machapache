#include <iostream>
#include <string>
class Mascota
{
private:
    std::string nombre;

public:
    Mascota(/* args */)
    {
        std::cout << "Ha iniciado una nueva mascota." << std::endl;
        this->nombre = "Firulais";
    }
    void Inicializar()
    {
        std::cout << "Ha nacido una nueva mascota." << std::endl;
        this->nombre = "Firulais";
    }

    ~Mascota()
    {
        std::cout << "Adios Mundo Cruel" << std::endl;
    }
    void Destruir()
    {
        std::cout << "Adios Mundo Cruel" << std::endl;
    }
    void DecirNombre()
    {
        std::cout << "Mi nombre es: " << this->nombre << std::endl;
        ;
    }
};