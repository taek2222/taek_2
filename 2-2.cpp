// �������� 2-2
#include <iostream>

using namespace std;

int main() {
	int number;

	cout << "�ݶ�, ��, ��������Ʈ, �ֽ�, Ŀ�� �߿��� �ϳ��� �����ϼ��� : ";
	cin >> number;
	switch (number)
	{
	case 1:
		cout << "�ݶ� �����Ͽ����ϴ�.";
		break;
	case 2:
		cout << "���� �����Ͽ����ϴ�.";
		break;
	case 3:
		cout << "��������Ʈ�� �����Ͽ����ϴ�.";
		break;
	case 4:
		cout << "�ֽ��� �����Ͽ����ϴ�.";
		break;
	case 5:
		cout << "Ŀ�Ǹ� �����Ͽ����ϴ�.";
		break;
	default:
		cout << "����. ������ ��ȿ���� �ʽ��ϴ�. ���� ��ȯ�մϴ�.";
		break;
	}

	return 0;
}