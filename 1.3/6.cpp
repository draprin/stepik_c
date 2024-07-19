// Дано целое трехзначное число. Найдите сумму его цифр.
// На вход дается число от 100 до 999.

#include <iostream>
using namespace std;
int main() {
    int k;
    cin >> k;
    cout << k % 10 + k % 100 / 10 + k / 100 ;
    return 0;
}

