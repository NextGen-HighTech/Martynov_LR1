#include <iostream>
#include <climits>

using namespace std;

// Прототипы функций
int findMaxDigit(int x);
{
    //Реализует Мартынов А.А. в ветке branch_1
}
int findMinDigit(int x);
{
    //Реализует Мартынов А.А. в ветке branch_2
}

int main() {
    int choice;
    int number;

    while (true) {
        // Вывод меню
        cout << "Меню:" << endl;
        cout << "1. Ввести натуральное число X" << endl;
        cout << "2. Найти наибольшую цифру в записи числа X" << endl;
        cout << "3. Найти наименьшую цифру в записи числа X" << endl;
        cout << "4. Выход" << endl;
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите натуральное число X: ";
                cin >> number;
                if (number <= 0) {
                    cout << "Ошибка: число должно быть натуральным (больше 0)." << endl;
                    number = 0;
                }
                break;
            case 2:
                if (number <= 0) {
                    cout << "Ошибка: число X не введено или введено некорректно." << endl;
                } else {
                    findMaxDigit(number);
                }
                break;
            case 3:
                if (number <= 0) {
                    cout << "Ошибка: число X не введено или введено некорректно." << endl;
                } else {
                    findMinDigit(number);
                }
                break;
            case 4:
                cout << "Выход из программы." << endl;
                return 0;
            default:
                cout << "Ошибка: неверный пункт меню." << endl;
                break;
        }
    }
    return 0;
}