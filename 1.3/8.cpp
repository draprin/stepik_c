// В некоторой школе решили набрать три новых математических класса и оборудовать кабинеты для них новыми партами. 
// За каждой партой может сидеть два учащихся. Известно количество учащихся в каждом из трех классов. 
// Выведите наименьшее число парт, которое нужно приобрести для них. Каждый класс сидит в своем кабинете.
// Программа получает на вход три целых неотрицательных числа: количество учащихся в каждом из трех классов (числа не превышают 1000).

#include <iostream>
using namespace std;
int main()
{
    int k, r, e, p, o, l;

    cin >> r >> e >> p;

    k = r / 2 + r % 2;
    o = e / 2 + e % 2;
    l = p / 2 + p % 2;

    cout << k + o + l << endl;
    return 0;
}