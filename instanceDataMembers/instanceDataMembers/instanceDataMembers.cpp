// instanceDataMembers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Cat.h"
using namespace std;

int main()
{
    Cat jim;

    jim.happy = false;
    jim.speak();
    return 0;
}

