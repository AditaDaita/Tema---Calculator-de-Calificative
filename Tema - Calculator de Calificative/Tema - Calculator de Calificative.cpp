// Tema - Calculator de Calificative.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Calculator de Calificative " << std::endl;
    
    int calificativ;
  
    std::cout << "Introduceti punctele obtinute\n ";
    std::cin >> calificativ;
        if (calificativ >= 90 && calificativ <= 100)
        {
            std::cout << "Felicitati!! Ai primit calificativul A\n";
        }
        
        else if (calificativ >= 80 && calificativ <= 89)
        {
            std::cout << "Bravo! Ai promovat testul cu calificativul B" << std::endl;
        }
        else if (calificativ >= 70 && calificativ <= 79)
        {
            std::cout << "Ai primit calificativul C " << std::endl;
        }
        else if (calificativ >= 60 && calificativ <= 69)
        {
            std::cout << "Ai primit calificativul D" << std::endl;
        }
        else if (calificativ <= 60)
        {
            std::cout << "Te-ai inecat la mal! Ai primit calificativul E " << std::endl;
        }

   





















}


