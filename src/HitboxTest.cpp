#include <SFML/Graphics.hpp>

class Personaje
{
public:
    Personaje(sf::Vector2f position, sf::Color color)
    {
        shape.setSize(sf::Vector2f(50, 50));
        shape.setPosition(position); // Posición inicial cuadro
        shape.setFillColor(color);

        // Cargar la imagen desde un archivo
        
        // if (!texture.loadFromFile("assets/Images/TestSources/pikachu.png")){
        
        // }
        // this->sprite = sf::Sprite(texture);
        // this->sprite.setPosition(position); // Posición inicial sprite
    }

    void move(float offsetX, float offsetY)
    {
        // sprite.move(offsetX, offsetY);
        shape.move(offsetX, offsetY);
    }

    void draw(sf::RenderWindow &window)
    {
        window.draw(this->shape);
        // window.draw(this->sprite);
    }

    // void update(){
    //     // Actualizar el frame de la animación
    //     if (clock.getElapsedTime().asSeconds() >= frameTime)
    //     {
    //         currentFrame = (currentFrame + 1) % numFrames;
    //         sprite.setTextureRect(sf::IntRect((currentFrame * 64)+17, 133, 64, 36));
    //         clock.restart();
    //     }
    // }

private:
    sf::RectangleShape shape;
    // sf::Sprite sprite;
    sf::Texture texture;
    sf::Clock clock;
    float frameTime = 0.1f; // Tiempo entre cada frame en segundos
    int currentFrame = 0;
    int numFrames = 4; // Número total de frames en la animación
    int frameWidth = 32;
    int frameHeight = 32;
};

double velocidad = 0.2;

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Hitbox Test");

    Personaje pika(sf::Vector2f(10, 10), sf::Color::Red);
    Personaje player(sf::Vector2f(350, 525), sf::Color::Green);
    Personaje enemy1(sf::Vector2f(150, 100), sf::Color::White);
    Personaje enemy2(sf::Vector2f(350, 100), sf::Color::White);
    Personaje enemy3(sf::Vector2f(550, 100), sf::Color::White);
    Personaje enemy4(sf::Vector2f(75, 175), sf::Color::White);
    Personaje enemy5(sf::Vector2f(275, 175), sf::Color::White);
    Personaje enemy6(sf::Vector2f(475, 175), sf::Color::White); 
    Personaje enemy7(sf::Vector2f(675, 175), sf::Color::White);    
    Personaje enemy8(sf::Vector2f(150, 250), sf::Color::White);
    Personaje enemy9(sf::Vector2f(350, 250), sf::Color::White);
    Personaje enemy10(sf::Vector2f(550, 250), sf::Color::White);

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
        pika.move(velocidad, 0);
        
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            player.move(velocidad * -1, 0);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            player.move(velocidad, 0);
        }
        // if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        // {
        //     pika.move(0, velocidad * -1);
        // }
        // if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        // {
        //     pika.move(0, velocidad);
        // }

        // Actualizar animacion pikachu
        // pika.update();
        // player.update();
        // enemy1.update();
        // enemy2.update();
        // enemy3.update();

        window.clear();
        pika.draw(window);
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
        window.display();
    }

    return 0;
}