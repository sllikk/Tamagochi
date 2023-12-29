#pragma once
#include <string>

class Critter{
public:
    Critter(const std::string& n)
        : name(n),
          age(0),
          hanger(0),
          happines(100)
    {
    }
private:
    std::string name;
    int age;
    int hanger;
    int happines;
public:
    void feed();
    void play();
    void ageOneDay();
    void getStatus() const;     
    bool isAlive() const;    
};

