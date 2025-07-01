#include "car.h"
#include <iostream>
using namespace std;
int main() {
    Car createNewCar(const char* colour, const char* brand, const char* materialCar) {
        Car temp{};

        int len = strlen(colour) + 1;
        temp.colour = new char[len];
        strcpy_s(temp.colour, len, colour);

        len = strlen(brand) + 1;
        temp.brand = new char[len];
        strcpy_s(temp.brand, len, brand);

        len = strlen(materialCar) + 1;
        temp.materialCar = new char[len];
        strcpy_s(temp.materialCar, len, materialCar);

        len = strlen(numberWithLetters) + 1;
        temp.numberWithLetters = new char[len];
        strcpy_s(temp.numberWithLetters, len, numberWithLetters);

        return temp;
    }

    Car createNewCarFromUserInput() {
        Car newCar{};
        char buffer[256];
        cin.ignore();

        cout << "\n--- CREATE NEW CAR ---\n";

        cout << "Enter the colour of car: ";
        cin.getline(buffer, sizeof(buffer));
        int len = strlen(buffer) + 1;
        newCar.colour = new char[len];
        strcpy_s(newCar.colour, len, buffer);

        cout << "Enter the brand of film: ";
        cin.getline(buffer, sizeof(buffer));
        len = strlen(buffer) + 1;
        newCar.brand = new char[len];
        strcpy_s(newCar.brand, len, buffer);

        cout << "Enter the material of car: ";
        cin.getline(buffer, sizeof(buffer));
        len = strlen(buffer) + 1;
        newCar.materialCar = new char[len];
        strcpy_s(newCar.materialCar, len, buffer);

        cout << "Enter the number with letters: ";
        cin.getline(buffer, sizeof(buffer));
        len = strlen(buffer) + 1;
        newCar.numberWithLetters = new char[len];
        strcpy_s(newCar.numberWithLetters, len, buffer);
    }

    void printCar(const Car & car) {
        cout << "\n--- CAR INFO ---\n";
        cout << "Colour: " << newCar.colour << "\n";
        cout << "Brand: " << newCar.brand << "\n";
        cout << "Material: " << newCar.materialCar << "\n";
        cout << "Number: " << newCar.numberWithLetters << "\n"
    }
    
    void deleteCar(Car & car) {
        delete[] newCar.colour;
        delete[] newCar.brand;
        delete[] newCar.materialCar;
        delete[] newCar.numberWithLetters;

        newCar.colout = newCar.brand = newCar.materialCar = numberWithLetters = nullptr;
    }

