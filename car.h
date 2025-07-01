#pragma once
struct Car {
	char* brand[50];
	char* colour[50];
	char* materialCar[50];
	char* numberWithLetters[50];
};
Car createNewCar(const char* colour, const char* brand, const char* materialCar);
Car createNewCarFromUserInput();
void printCar(const Car& car);
void deleteCar(Car& car);

