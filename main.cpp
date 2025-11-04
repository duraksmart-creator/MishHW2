#include <iostream>
#include "vector"


using namespace std;

// Функция добавления элементов в массив
void increaseArray(vector<int>& arr, int AddNumber) {
    if (AddNumber <= 0) {
        cout << "z - ne mojet bit menshe ili ravno 0" << endl;
        return;
    }
    cout << "Vvedite " << AddNumber << " dopolnitelnyh elementov:" << endl;
    for (int i = 0; i < AddNumber; i++) {
        int newElement;
        cout << "Dopolnitelnyi element " << i + 1 << ": ";
        cin >> newElement;
        arr.push_back(newElement);
    }
}

// Функция вывод адресов элементов массива
void printAddresses(const vector<int>& arr) {
    cout << "Adresa elementov massiva:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << "Element " << i << " (znachenie: " << arr[i] << "): " << &arr[i] << endl;
    }
}

// Создание/вывод одномерного массива
int main() {
    int number;
    cout << "Vvedite kol-vo elementov massiva: ";
    cin >> number;
    if (number <= 0) {
        cout << "number - ne mojet bit menshe 0" << endl;
        return 1;
    }
    vector<int> arr(number);

    cout << "Vvedite " << number << " elementov massiva " << endl;
    for (int i = 0; i < number; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << endl;
    cout << "Ishodnyi massiv:" << endl;
    cout << "[";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    printAddresses(arr);
    int z;
    cout << "\nVvedite kol-vo elementov dlya dobavleniya (addnumber): ";
    cin >> z;
    increaseArray(arr, z);
    cout << "\nResultat posle dobavleniya:" << endl;
    cout << "[";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i < arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    printAddresses(arr);
    return 0;
}
