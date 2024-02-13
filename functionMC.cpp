#include <iostream>
#include "functionMC.h"
#include <cctype> // tolower 
#include <cstring> // Tableau

namespace functionMC {

    char* morseCode(char tab[], int i) {
        char c = std::tolower(tab[i]); // Conversion to lowercase
        char phrase[999] = "";


        // Alphabete
        if (c == 'a') {
            const char* morse = ".- ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'b') {
            const char* morse = "-...  ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'c') {
            const char* morse = "-.-. ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'd') {
            const char* morse = "-.. ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'e') {
            const char* morse = ". ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'f') {
            const char* morse = "..-. ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'g') {
            const char* morse = "--. ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'h') {
            const char* morse = ".... ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'i') {
            const char* morse = ".. ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'j') {
            const char* morse = ".--- ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'k') {
            const char* morse = "-.- ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'l') {
            const char* morse = ".-.. ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'm') {
            const char* morse = "-- ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'n') {
            const char* morse = "-. ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'o') {
            const char* morse = "--- ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'p') {
            const char* morse = ".--. ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'q') {
            const char* morse = "--.- ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'r') {
            const char* morse = ".-. ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 's') {
            const char* morse = "... ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 't') {
            const char* morse = "- ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == 'u') {
            const char* morse = "..- ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == 'v') {
            const char* morse = "...- ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == 'w') {
            const char* morse = ".-- ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == 'x') {
            const char* morse = "-..- ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == 'y') {
            const char* morse = "-.-- ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == 'z') {
            const char* morse = "--.. ";
            strcat_s(phrase, sizeof(phrase), morse);
            }

        // Nombres
        else if (c == '0') {
            const char* morse = "----- ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == '1') {
            const char* morse = ".---- ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == '2') {
            const char* morse = "..--- ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == '3') {
            const char* morse = "...-- ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == '4') {
            const char* morse = "....- ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == '5') {
            const char* morse = "..... ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == '6') {
            const char* morse = "-.... ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == '7') {
            const char* morse = "--... ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == '8') {
            const char* morse = "---.. ";
            strcat_s(phrase, sizeof(phrase), morse);
            }
        else if (c == '9') {
            const char* morse = "----. ";
            strcat_s(phrase, sizeof(phrase), morse);
            }

        // Autres
        else if (c == '.') {
            const char* morse = ".-.-.- ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == ',') {
            const char* morse = "--..-- ";
            strcat_s(phrase, sizeof(phrase), morse);
        }
        else if (c == ';') {
            const char* morse = "-.-.-. ";
            strcat_s(phrase, sizeof(phrase), morse);
        }

        // Inconnu
        else {
            const char* morse = "? ";
            strcat_s(phrase, sizeof(phrase), morse);
            }

            return phrase;
    }
}