// На вход дается натуральное число N. Выведите следующее за ним четное число
// На вход дается целое положительное число N, не превышающее 10000.

#include <iostream>
using namespace std;
int main()
{
    int k, s;
    cin >> k;
    s = (k / 2)* 2 + 2;
    cout << k << endl;
    return 0;
}