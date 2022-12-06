// 연습문제 2-11
#include <iostream>

using namespace std;

int main()
{
	int total=0, n;

	cout << "n의 값을 입력하시오 : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		total = total + (i * i);

	cout << "계산값은 " << total << "입니다.";

	return 0;
}