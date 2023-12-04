/* Объект – автомобиль в автосервисе. Известна марка автомобиля,
фамилия владельца, телефон владельца, дата последнего планового техобслуживания, причина нахождения в сервисе.
Выдать список автомобилей
марки «Chevrolet»*/
#include <iostream>
#include <string>

using namespace std;

// Структура для представления автомобиля
struct Car {
    string brand;
    string ownerSurname;
    string ownerPhone;
    string lastMaintenanceDate;
    string reasonInService;
};

int main() {
    setlocale(LC_ALL, "ru");
    // Создаем массив для хранения автомобилей
    int numOfCars;
    bool ifFound= false;
    cout << "введите количество машин:";
    cin >> numOfCars;
    Car *cars = new Car[numOfCars];

    for (int i = 0; i < numOfCars; i++) {
        cout << "Марка: ";
        getline(cin,cars[i].brand);
        cout << "Фамилия владельца: ";
        getline(cin,cars[i].ownerSurname);
        cout << "Телефон владельца: ";
        getline(cin, cars[i].ownerPhone);
        cout << "Дата последнего планового техобслуживания: ";
        getline(cin,cars[i].lastMaintenanceDate);
        cout << "Причина нахождения в сервисе: ";
        getline(cin, cars[i].reasonInService);
    }

    // Выводим список автомобилей марки "Chevrolet"
    cout << "Список автомобилей марки Chevrolet:\n";

    for (int i = 0; i < numOfCars; i++) {
        if (cars[i].brand == "Chevrolet") {
            ifFound = true;
            cout << "Марка: " << cars[i].brand << endl;
            cout << "Фамилия владельца: " << cars[i].ownerSurname << endl;
            cout << "Телефон владельца: " << cars[i].ownerPhone << endl;
            cout << "Дата последнего планового техобслуживания: " << cars[i].lastMaintenanceDate << endl;
            cout << "Причина нахождения в сервисе: " << cars[i].reasonInService << endl;
            cout << endl;
        }
    }
    if (ifFound == false) {
        cout << "ошибка!нету такого автомата";
    }
    
    delete[] cars;
    return 0;
}
