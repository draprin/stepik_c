//N белочек нашли K орешков и решили разделить их поровну. 
//Определите, сколько орешков останется после того, как все белочки возьмут себе равное количество орешков.
// На вход дается два целых положительных числа N и K, каждое из которых не превышает 10000.

#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    cout << k % n << endl;
    return 0;
}