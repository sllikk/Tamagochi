#include "Critter.h"
#include<iostream>

void Critter::feed()
{
    hanger -= 10;
    if (hanger < 0) hanger = 0; 
    happines += 5; 
    std::cout << "Nom Nom " << name << " is happy!\n";
}
void Critter::play()
{
    happines += 10;
    hanger += 5;
    std::cout << " Having fun " << name << " is happy!\n";
}
void Critter::ageOneDay()
{
    age++;
    hanger += 5;
    happines -= 5;
    std::cout << "Happy birthday " << name << " is now " << age << " is now\n";
}
void Critter::getStatus() const
{
    std::cout << "Name " << name << "\n"; 
    std::cout << "Hunger " << hanger << "\n"; 
    std::cout << "Happines " << happines << "\n"; 
    std::cout << "Age " << age << "\n"; 
}
bool Critter::isAlive() const
{
    return(hanger < 100 && happines > 0);
}
