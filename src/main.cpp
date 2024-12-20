#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "My Program");
    window.setFramerateLimit(60);

    // Create Sprite
    sf::RectangleShape rect;
    sf::Vector2f rectanglePosition(600, 350);

    // Set Sprite Position and Size
    rect.setPosition(rectanglePosition);
    rect.setSize(sf::Vector2f(100, 100));

    float xVelocity = 3;
    float yVelocity = 3;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) window.close();

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) window.close();
        }

        if (rectanglePosition.x < 0 || rectanglePosition.x > 1280 - 100) xVelocity *= -1;
        if (rectanglePosition.y < 0 || rectanglePosition.y > 720 - 100) yVelocity *= -1;

        // "Physics"
        rectanglePosition.x += xVelocity;
        rectanglePosition.y += yVelocity;
        rect.setPosition(rectanglePosition);

        // Render and Draw Sprite
        window.clear();
        window.draw(rect);
        window.display();
    }


    return 0;
}