#include <iostream>
#include "Critter.h"

int main()
{
    std::string name;
    std::cout << "Hello give your Tamagotchi a name: " << name << "\n\n";    
    std::cin >> name;    
    Critter myPet(name);

    while (myPet.isAlive())
    {
        myPet.getStatus();

        std::cout << "Choise in action\n";
        std::cout <<  "1. Feed: \n"; 
        std::cout <<  "1. Play: \n"; 
        std::cout <<  "1. Do nothing: \n"; 

        int choise;
        std::cin >> choise;

        switch (choise)
        {
            case1:
                        myPet.feed();
            break;
            case2:    
                myPet.play();
            break;
            case3:
                break;
        default:
            std::cout << "correct your choise \n";
            myPet.ageOneDay();
        }

        std::cout << "Game over! Your Tamagotchi has passed away.\n";
    }

    return 0;

}