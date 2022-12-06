// 연습문제 2-5
#include <iostream>

using namespace std;

int main() {
	int total = 0, number;

	do
	{
		cout << "정수를 입력하시오 : ";
		cin >> number;
		total += number;
	} while (number != 0);
	
	cout << "합계=" << total;

	return 0;
}