// 연습문제 2-14
#include <iostream>

using namespace std;

int main()
{
	char giho;
	int a, b, result;

	cout << "연산의 종류 : ";
	cin >> giho;
	cout << "숫자를 입력하시오. : ";
	cin >> a >> b;

	switch (giho)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		if (b == 0)
			cout << "분모가 0이라 불가능합니다.";
		result == a / b;
		break;
	default:
		break;
	}
	cout << "계산의 결과 : " << result;
	return 0;
}