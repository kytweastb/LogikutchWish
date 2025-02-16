#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

#include <algorithm>


int main()
{
    // create the window
    sf::RenderWindow window(sf::VideoMode({1200, 800}), "My window");
    sf::ConvexShape shape;
    shape.setFillColor(sf::Color::White);
    shape.setPointCount(3);
    shape.setPoint(0, sf::Vector2f(550, 300));
    shape.setPoint(1, sf::Vector2f(550, 500));
    shape.setPoint(2, sf::Vector2f(650, 400));
    // run the program as long as the window is open
    while (window.isOpen())
    {
        // check all the window's events that were triggered since the last iteration of the loop
        while (const std::optional event = window.pollEvent())
        {
            // "close requested" event: we close the window
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // clear the window with black color
        window.clear(sf::Color(50,50,50));
        window.draw(shape);

        // draw everything here...
        // window.draw(...);

        // end the current frame
        window.display();
    }
}