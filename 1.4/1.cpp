// Даны два целых числа. Выведите значение наибольшего из них. Если числа равны, выведите любое из них.
// Формат входных данных
// Вводятся два числа.

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << a;
    } else {
        cout << b;
    }

    return 0;
}