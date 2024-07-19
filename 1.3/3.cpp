// Дано натуральное число, выведите его последнюю цифру.
// На вход дается натуральное число N, не превосходящее 10000.

#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    cout << k % 10 << endl;
    return 0;
}
