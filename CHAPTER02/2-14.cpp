// �������� 2-14
#include <iostream>

using namespace std;

int main()
{
	char giho;
	int a, b, result;

	cout << "������ ���� : ";
	cin >> giho;
	cout << "���ڸ� �Է��Ͻÿ�. : ";
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
			cout << "�и� 0�̶� �Ұ����մϴ�.";
		result == a / b;
		break;
	default:
		break;
	}
	cout << "����� ��� : " << result;
	return 0;
}