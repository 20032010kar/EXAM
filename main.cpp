#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    /*Завдання 1.Запитайте у користувача два числа, запишіть їх у змінні а та б,
    поміняйте місцями значення у цих змінних. (1б)*/
    int a, b;
    cout << "Введіть число a: ";
    cin >> a;
    cout << "Введіть число b: ";
    cin >> b;

    int temp = a;
    a = b;
    b = temp;

    cout << "Після обміну: a = " << a << ", b = " << b << endl << endl;

    //Завдання 2.Запитайте у користувача число, порахуйте кількість цифр в ньому
    int number;
    cout << "Введіть число для підрахунку кількості цифр: ";
    cin >> number;
    cout << "Ось така кількість чисел: " << number;

    /*Завдання 3.Користувач вводить з клавіатури кількість студентів, які склали
    іспит, та кількість «боржників».Обчислити, який відсоток становлять
    «боржники» від загальної кількості студентів, а також який відсоток
    становлять студенти, які склали іспит.(1б)*/
    int passed, fail;
    cout << "Введіть кількість студентів, які склали іспит: ";
    cin >> passed;
    cout << "Введіть кількість боржників: ";
    cin >> fail;

    int totalSum = passed + fail;
    if (totalSum == 0) {
        cout << "Загальна кількість студентів не може бути нульовою." << endl;
        return 1;
    }

    double percentFail = (double)fail / totalSum * 100;
    double percentPassed = (double)passed / totalSum * 100;

    cout << "Відсоток боржників: " << percentFail << "%" << endl;
    cout << "Відсоток студентів, які склали іспит: " << percentPassed << "%" << endl << endl;

    /*Завдання 4.Створіть масив з 20 елементів, ініціалізуйте масив випадковими
    числами від - 20 до 20. (1б)
    a.Порахуйте кількість нульових елементів
    b.Порахуйте середнє значення негативних
    c.Знайдіть максимальне значення серед позитвних чисел.*/
    const int size = 20;
    int arr[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 41 - 20;
    }
    cout << "Масив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int zeroCount = 0;
    int negSum = 0;
    int negCount = 0;
    int maxPositive = -21;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            zeroCount++;
        }
        else if (arr[i] < 0) {
            negSum += arr[i];
            negCount++;
        }
        else {
            if (arr[i] > maxPositive) {
                maxPositive = arr[i];
            }
        }
    }
    cout << "Кількість нульових елементів: " << zeroCount << endl;

    if (negCount > 0) {
        double negAverage = (double)negSum / negCount;
        cout << "Середнє значення негативних чисел: " << negAverage << endl;
    }
    else {
        cout << "Негативних чисел немає" << endl;
    }

    if (maxPositive > 0) {
        cout << "Максимальне позитивне число: " << maxPositive << endl;
    }
    else {
        cout << "Позитивних чисел немає" << endl;
    }

    /*. Створіть двовимірний динамічний масив розміром 5х5: (2б)
    a. Визначіть в якому стовпчику сума елементів є максимальною
    b. Поміняйте місцями 3 та 4 рядок
    c. Зробіть реверс 5 рядку.*/
    const int size = 20;
    int arr[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 41 - 20;
    }
    cout << "Масив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int zeroCount = 0;
    int negativeSum = 0;
    int negativeCount = 0;
    int maxPositive = -21;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            zeroCount++;
        }
        else if (arr[i] < 0) {
            negativeSum += arr[i];
            negativeCount++;
        }
        else {
            if (arr[i] > maxPositive) {
                maxPositive = arr[i];
            }
        }
    }

    cout << "Кількість нульових елементів: " << zeroCount << endl;

    if (negCount > 0) {
        double negAverage = (double)negativeSum / negativeCount;
        cout << "Середнє значення негативних чисел: " << negAverage << endl;
    }
    else {
        cout << "Негативних чисел немає" << endl;
    }

    if (maxPositive > 0) {
        cout << "Максимальне позитивне число: " << maxPositive << endl;
    }
    else {
        cout << "Позитивних чисел немає" << endl;
    }
    return 0;

}
        
