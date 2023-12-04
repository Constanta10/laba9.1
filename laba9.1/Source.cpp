/* ������ � ���������� � �����������. �������� ����� ����������,
������� ���������, ������� ���������, ���� ���������� ��������� ���������������, ������� ���������� � �������.
������ ������ �����������
����� �Chevrolet�*/
#include <iostream>
#include <string>

using namespace std;

// ��������� ��� ������������� ����������
struct Car {
    string brand;
    string ownerSurname;
    string ownerPhone;
    string lastMaintenanceDate;
    string reasonInService;
};

int main() {
    setlocale(LC_ALL, "ru");
    // ������� ������ ��� �������� �����������
    int numOfCars;
    bool ifFound= false;
    cout << "������� ���������� �����:";
    cin >> numOfCars;
    Car *cars = new Car[numOfCars];

    for (int i = 0; i < numOfCars; i++) {
        cout << "�����: ";
        getline(cin,cars[i].brand);
        cout << "������� ���������: ";
        getline(cin,cars[i].ownerSurname);
        cout << "������� ���������: ";
        getline(cin, cars[i].ownerPhone);
        cout << "���� ���������� ��������� ���������������: ";
        getline(cin,cars[i].lastMaintenanceDate);
        cout << "������� ���������� � �������: ";
        getline(cin, cars[i].reasonInService);
    }

    // ������� ������ ����������� ����� "Chevrolet"
    cout << "������ ����������� ����� Chevrolet:\n";

    for (int i = 0; i < numOfCars; i++) {
        if (cars[i].brand == "Chevrolet") {
            ifFound = true;
            cout << "�����: " << cars[i].brand << endl;
            cout << "������� ���������: " << cars[i].ownerSurname << endl;
            cout << "������� ���������: " << cars[i].ownerPhone << endl;
            cout << "���� ���������� ��������� ���������������: " << cars[i].lastMaintenanceDate << endl;
            cout << "������� ���������� � �������: " << cars[i].reasonInService << endl;
            cout << endl;
        }
    }
    if (ifFound == false) {
        cout << "������!���� ������ ��������";
    }
    
    delete[] cars;
    return 0;
}
