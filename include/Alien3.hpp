#include <SFML/Graphics.hpp>
class Alien3
{
public:
    Alien3(sf::Vector2f position, sf::Color color)
    {       
        if (!texture.loadFromFile("assets/Images/spritesheet.png"))
        {
        }
        this->sprite = sf::Sprite(texture);
        this->sprite.setPosition(position); // Posición inicial sprite
    }

    void move(float offsetX, float offsetY)
    {
        sprite.move(offsetX, offsetY);
    }

    void draw(sf::RenderWindow &window)
    {
        window.draw(this->sprite);
    }

    void update(){
        if (clock.getElapsedTime().asSeconds() >= frameTime)
        {
            currentFrame = (currentFrame + 1) % numFrames;
            sprite.setTextureRect(sf::IntRect((currentFrame * 30), 60, 30, 30));
            clock.restart();
        }
    }

private:
    // sf::RectangleShape shape;
    sf::Sprite sprite;
    sf::Texture texture;
    sf::Clock clock;
    float frameTime = 0.1f; // Tiempo entre cada frame en segundos
    int currentFrame = 0;
    int numFrames = 2; // Número total de frames en la animación
    int frameWidth = 38;
    int frameHeight = 30;
};