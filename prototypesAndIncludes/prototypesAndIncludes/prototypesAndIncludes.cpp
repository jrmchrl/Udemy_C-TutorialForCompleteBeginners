#include <iostream> //Anglebrackets are at standard location
#include "utils.h" //Anf�hrungszeichen werden f�r Dateien verwendet, die im Projekt gespeichert werden
using namespace std;

// preprossor looks for # statements first to then run those first 



int main() {

    doSomething();
    doSomething();

    return 0;

}


void doSomething()
{
    std::cout << "Hello World!\n";
}
