#include "car.h"
#include <iostream>
using namespace std;
int main() {
    void displayMenu() {
        cout << "\n---CAR LIBRARY MENU ---\n";
        cout << "1. Create a new car \n";
        cout << "2. Create a new car from user input\n";
        cout << "4. Print Car\n";
        cout << "7. Delete Car\n";
        cout << "8.Exit\n";
        cout << "Enter your choice: ";
    }
    Car* cars = nullptr;
    int size = 0;
    int choice;

    do {
        displayMenu();
        while (!(cin >> choice) || choice < 1 || choice > 7) {
            cout << "Invalid input. Enter number between 1–7: ";
            cin.clear();
            cin.ignore(256, '\n');
        }
        switch (choice) {
        case 1:
            Car createNewCar(const char* colour, const char* brand, const char* materialCar);
            break;
        case 2:
            Car createNewCarFromUserInput();
            break;
        case 3:
            void printCar(const Car & car);
            break;
        case 4:
            void deleteCar(Car & car);
            break;
        }while (choice != 7);
        return 0;
    }
}
