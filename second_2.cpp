// Function con un prototipo
#include <cstdlib>
#include <iostream>
using namespace std;

// Creación de función prueba
void prueba();

int main (void){
    prueba();
    cout << "Presione ENTER para salir"; 
    cin.get();
    return EXIT_SUCCESS;
} 

void prueba () {
    system("clear");
    cout << "\nUn pequeño paso para ti, grandes teclas para mí \n\n";
}