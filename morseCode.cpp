#include <iostream>
#include <vector>
#include "functionMC.h"
#include <windows.h> //  Beep()

using namespace functionMC;
int main() {
    const int max_length = 999; // Max length de l'input 
    char tab[max_length];
    std::cout << "Entrez une phrase!\n";
    std::cin.getline(tab, max_length);

    char phrase[max_length] = ""; // Initialize phrase

    int i = 0;
    while (tab[i] != '\0') {
        // Si egal a rien, faite un espace
        if (tab[i] == ' ') {
            std::cout << " ";
            strcat_s(phrase, sizeof(phrase), " ");
        }
        // Si non, rentre le donner
        else {
            char* morseChar = morseCode(tab, i); 
            std::cout << morseChar;
            strcat_s(phrase, sizeof(phrase), morseChar); 
        }
        i++;
    }

    int j = 0;
    // Beep, on cree une nouvelle tableau avec tous les charactere du phrase
    while (phrase[j] != '\0') {
        if (phrase[j] == '-') {
            Beep(500, 150);
        }
        else if (phrase[j] == '.') {
            Beep(500, 50);
        }
        else {
            Sleep(250);
        }
        j++;
    }
    Beep(500, 50);

    return 0;
}