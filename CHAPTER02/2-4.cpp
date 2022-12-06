// 연습문제 2-4
#include <iostream>

using namespace std;

int main()
{
	int i, number;

	cout << "정수를 5번 입력하시오." << endl;
	for (i = 0; i < 5; i++)
	{
		cout << "정수를 입력하시오. : ";
		cin >> number;

		if (number == 5) {
			cout << "5를 입력하였구요! 컴퓨터 승" << endl;
			return 0;
		}
	}
	cout << "인내심이 강합니다. 사용자 승" << endl;
	return 0;
}