#include <SFML/Graphics.hpp>
#include <Alien1.hpp>
#include <Alien2.hpp>
#include <Alien3.hpp>
#include <Nave.hpp>
#include <Jugador.hpp>
#include <Personaje.hpp>
#include <Protector.hpp>
double velocidad = 0.2;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Hitbox Test");

    Nave ship(sf::Vector2f(10, 10), sf::Color::Red);
    Jugador player(sf::Vector2f(350, 525), sf::Color::Green);
    Alien1 enemy1(sf::Vector2f(150, 100), sf::Color::White);
    Alien1 enemy2(sf::Vector2f(350, 100), sf::Color::White);
    Alien1 enemy3(sf::Vector2f(550, 100), sf::Color::White);
    Alien2 enemy4(sf::Vector2f(75, 175), sf::Color::White);
    Alien2 enemy5(sf::Vector2f(275, 175), sf::Color::White);
    Alien2 enemy6(sf::Vector2f(475, 175), sf::Color::White);
    Alien2 enemy7(sf::Vector2f(675, 175), sf::Color::White);
    Alien3 enemy8(sf::Vector2f(150, 250), sf::Color::White);
    Alien3 enemy9(sf::Vector2f(350, 250), sf::Color::White);
    Alien3 enemy10(sf::Vector2f(550, 250), sf::Color::White);
    Protector barrier1(sf::Vector2f(150, 450), sf::Color::Green);
    Protector barrier2(sf::Vector2f(350, 450), sf::Color::Green);
    Protector barrier3(sf::Vector2f(550, 450), sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        ship.move(0.1, 0);

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            player.move(velocidad * -1, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            player.move(velocidad, 0);
        }

        // Actualizar animacion pikachu
        barrier1.update();
        barrier2.update();
        barrier3.update();
        ship.update();
        player.update();
        enemy1.update();
        enemy2.update();
        enemy3.update();
        enemy4.update();
        enemy5.update();
        enemy6.update();
        enemy7.update();
        enemy8.update();
        enemy9.update();
        enemy10.update();

        window.clear();
        ship.draw(window);
        player.draw(window);
        enemy1.draw(window);
        enemy2.draw(window);
        enemy3.draw(window);
        enemy4.draw(window);
        enemy5.draw(window);
        enemy6.draw(window);
        enemy7.draw(window);
        enemy8.draw(window);
        enemy9.draw(window);
        enemy10.draw(window);
        barrier1.draw(window);
        barrier2.draw(window);
        barrier3.draw(window);
        window.display();
    }

    return 0;
}
