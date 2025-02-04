// Электронные часы показывают время в формате h:mm:ss (от 0:00:00 до 23:59:59), то есть сначала записывается количество часов, 
// потом обязательно двузначное количество минут, затем обязательно двузначное количество секунд. 
// Количество минут и секунд при необходимости дополняются до двузначного числа нулями.
// С начала суток прошло N секунд. Выведите, что покажут часы.
// На вход дается натурально число N, не превосходящее 10^7 (10000000).
#include <iostream>

using namespace std;

int main() {
	int n, h, m, s;
	cin >> n;
	h = n / 3600 % 24;
	m = n / 60 % 60;
	s = n % 60;
	cout << h << ":" << m / 10 << m % 10 << ":" << s / 10 << s % 10;
	return 0;
}