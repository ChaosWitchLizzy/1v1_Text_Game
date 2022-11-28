// 1v1_Text_Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int WeaponChoice;

    std::cout << "1: Dagger 4-8 dmg 4x Critical Multiplier" << std::endl;
    std::cout << "2: Short Sword 6-12 3x Critical Multiplier" << std::endl;
    std::cout << "3: Long Sword 8-16 2x Critical Multiplier" << std::endl;
    std::cout << "Please choose your weapon: ";
    std::cin >> WeaponChoice;
    StartGame(WeaponChoice);
}
int StartGame(int WeaponChoice)
{
    switch (WeaponChoice)
    {
        
    }
}