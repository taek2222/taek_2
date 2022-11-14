// 연습문제 1-3
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int first, second;

	cout << "첫 번째 변 : ";
	cin >> first;

	cout << "두 번째 변 : ";
	cin >> second;

	cout << endl << "빗변 길이 : " << sqrt((first * first) + (second * second));

	return 0;
}