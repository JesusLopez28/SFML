#include <iostream>
#include <SFML/Graphics.hpp>
using namespace std;

int main(){
    sf::RenderWindow window(sf::VideoMode(200, 270), "Pollito");

    sf::CircleShape face(95.f);
    face.setFillColor(sf::Color(251, 227, 5));
    face.setOutlineThickness(3);
    face.setOutlineColor(sf::Color(247, 217, 23));
    face.setPosition(5, 5);

    sf::CircleShape eye1(25.f);
    eye1.setFillColor(sf::Color::White);
    eye1.setOutlineThickness(3);
    eye1.setOutlineColor(sf::Color::Black);
    eye1.setPosition(30,50);

    sf::CircleShape eye2(25.f);
    eye2.setFillColor(sf::Color::White);
    eye2.setOutlineThickness(3);
    eye2.setOutlineColor(sf::Color::Black);
    eye2.setPosition(120, 50);

    sf::CircleShape pupil1(10.f);
    pupil1.setFillColor(sf::Color::Black);
    pupil1.setPosition(45, 65);

    sf::CircleShape pupil2(10.f);
    pupil2.setFillColor(sf::Color::Black);
    pupil2.setPosition(135, 65);

    sf::CircleShape beak(30.f);
    beak.setPointCount(3);
    beak.rotate(180);
    beak.setFillColor(sf::Color(255, 164, 32));
    beak.setOutlineThickness(3);
    beak.setOutlineColor(sf::Color::Black);
    beak.setPosition(130, 185);

    sf::CircleShape beak2(30.f);
    beak2.setPointCount(3);
    beak2.setFillColor(sf::Color(255, 164, 32));
    beak2.setOutlineThickness(3);
    beak2.setOutlineColor(sf::Color::Black);
    beak2.setPosition(70, 90);

    sf::CircleShape hole1(3.f);
    hole1.setFillColor(sf::Color::Black);
    hole1.setPosition(85, 120);

    sf::CircleShape hole2(3.f);
    hole2.setFillColor(sf::Color::Black);
    hole2.setPosition(110, 120);

    sf::RectangleShape line1(sf::Vector2f(80, 7));
    line1.setFillColor(sf::Color(128, 64, 0));
    line1.rotate(90);
    line1.setPosition(70, 180);

    sf::RectangleShape line1_2(sf::Vector2f(20, 7));
    line1_2.setFillColor(sf::Color(128, 64, 0));
    line1_2.rotate(45);
    line1_2.setPosition(70, 245);

    sf::RectangleShape line1_3(sf::Vector2f(20, 7));
    line1_3.setFillColor(sf::Color(128, 64, 0));
    line1_3.rotate(180);
    line1_3.setPosition(70, 245);

    sf::RectangleShape line2(sf::Vector2f(80, 7));
    line2.setFillColor(sf::Color(128, 64, 0));
    line2.rotate(90);
    line2.setPosition(150, 180);

    sf::RectangleShape line2_2(sf::Vector2f(20, 7));
    line2_2.setFillColor(sf::Color(128, 64, 0));
    line2_2.rotate(45);
    line2_2.setPosition(150, 245);

    sf::RectangleShape line2_3(sf::Vector2f(20, 7));
    line2_3.setFillColor(sf::Color(128, 64, 0));
    line2_3.rotate(180);
    line2_3.setPosition(150, 245);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)  window.close();
        }
        window.clear();
        window.draw(line1);
        window.draw(line2);
        window.draw(line1_2);
        window.draw(line2_2);
        window.draw(line1_3);
        window.draw(line2_3);
        window.draw(face);
        window.draw(eye1);
        window.draw(eye2);
        window.draw(pupil1);
        window.draw(pupil2);
        window.draw(beak);
        window.draw(beak2);
        window.draw(hole1);
        window.draw(hole2);

        window.display();
    }
    return 0;
}