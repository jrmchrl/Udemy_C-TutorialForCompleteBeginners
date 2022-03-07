// Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()

{
	int numberCats = 5; 
	int numberDogs = 10; 
	int numberAnimals = numberCats + numberDogs; 
	

	cout << "Number of cats and Dogs: " << numberCats  + numberDogs << endl;
	cout << "New dog acquired!" << endl;

	numberDogs = numberDogs + 1;

	cout << "New number of dogs: " << numberDogs << endl; 

	cout << "Number of animals is: " << numberAnimals << endl;


	return 0;
}

