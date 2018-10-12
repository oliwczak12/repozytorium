#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow oknoAplikacji( sf::VideoMode( 640, 480, 32 ), "Kurs SFML - http://cpp0x.pl" );

    sf::Texture tekstura; //INFO: dopisane w tym rozdziale
    tekstura.loadFromFile( "ab.png" ); //INFO: dopisane w tym rozdziale

    sf::Sprite obrazek; //INFO: dopisane w tym rozdziale
    obrazek.setTexture( tekstura ); //INFO: dopisane w tym rozdziale

    while( oknoAplikacji.isOpen() )
    {
        sf::Event zdarzenie;
        while( oknoAplikacji.pollEvent( zdarzenie ) )
        {
            if( zdarzenie.type == sf::Event::Closed )
                 oknoAplikacji.close();

            if( zdarzenie.type == sf::Event::KeyPressed && zdarzenie.key.code == sf::Keyboard::Escape )
                 oknoAplikacji.close();

            if( zdarzenie.type == sf::Event::MouseButtonPressed && zdarzenie.mouseButton.button == sf::Mouse::Middle )
                 oknoAplikacji.close();

        }
        oknoAplikacji.clear( sf::Color::Black );
        oknoAplikacji.draw( obrazek ); //INFO: dopisane w tym rozdziale
        oknoAplikacji.display();
    }
    return 0;
}
