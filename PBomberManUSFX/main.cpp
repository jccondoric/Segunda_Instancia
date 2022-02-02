#include <string>

#include "SDL.h"

#include "GameManager.h"

int main(int /*argc*/, char** /*argv[]*/)
{
    // init game

    std::cout << "BOMBER MAN USFX" << std::endl;
    std::cout << "Juego hecho en C++" << std::endl;
    std::cout <<" " << std::endl;
    

    std::cout << "Realizado en la materia de SIS457, Programaci�n avanzada," << std::endl; 
    std::cout << "a cargo del Ingeniero Pacheco Lora Carlos Walter, en el semestre 2 / 2021," << std::endl;  
    std::cout << "por los estudiantes :"<< std::endl;
    std::cout << " " << std::endl;
    std::cout << "- Campos Romero Adriana Jasiel" << std::endl;
    std::cout << "- Diaz Soliz Jhon Carlos" << std::endl;
    std::cout << " " << std::endl; 

    std::cout << "El videojuego Bomber Man es un juego cl�sico, que consiste en que BomberMan" << std::endl;
    std::cout << "deba eliminar a los enemigos que se le presenten para llegar al siguiente nivel,"<< std::endl;
    std::cout << "pasando este por obst�culos y usandando diferentes �tems para lograr su objetivo."<< std::endl;
    std::cout << " " << std::endl; 
    std::cout << "Para la realizaci�n del juego se tom� de base el c�digo del usuario de GitHub," << std::endl;
    std::cout << "i - bardinov, que tiene el nombre de 'bomberman-sdl2'." << std::endl;
    std::cout << " " << std::endl;
    std::cout << "En el juego se us� pilares de POO, Abstracci�n, Encapsulamiento," << std::endl;
    std::cout << "Herencia y Polimorfismo, Contenedores avanzados, y a su vez el uso de Patrones de dise�o." << std::endl;
 


    GameManager* game = nullptr;
    game = GameManager::getInstance(std::string("Bomberman USFX"), 800, 600);
    // game = new GameManager(std::string("Bomberman USFX"), 800, 600);
    // run game loop
    game->execute();

    return 0;
}
