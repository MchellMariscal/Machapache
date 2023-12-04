#include <SFML/Graphics.hpp>

int main()
{
    // Crear una ventana
    sf::RenderWindow window(sf::VideoMode(800, 800), "Title Screen");

    // Cargar la imagen desde un archivo
    sf::Texture texture;
    if (!texture.loadFromFile("./assets/Images/SpaceBackground.png"))
    {
        // Manejar el error si no se puede cargar la imagen
        return -1;
    }
    sf::Texture texture2;
    if (!texture2.loadFromFile("./assets/Images/Title.png"))
    {
        // Manejar el error si no se puede cargar la imagen
        return -1;
    }

    // Crear un sprite y asignarle la textura
    sf::Sprite sprite(texture);
    sf::Sprite sprite2(texture2);

    // Bucle principal
    while (window.isOpen())
    {
        // Procesar eventos
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                // Cerrar la ventana si se recibe el evento de cerrar
                window.close();
            }
        }

        // Limpiar la ventana
        window.clear();

        // Dibujar el sprite en la ventana
        window.draw(sprite);
        window.draw(sprite2);

        // Mostrar la ventana
        window.display();
    }

    return 0;
}