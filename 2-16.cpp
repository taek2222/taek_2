// �������� 2-16

#include <iostream>
#include <ctime>

using namespace std;

int main() {

	int money, games = 0, lose = 0, win = 0;

	srand(time(NULL));

	for (int i = 0; i < 1000; i++)
	{
		for (money = 50; money > 0 && money < 250;)
		{
			if ((double)rand() / RAND_MAX < 0.5) money++;
			else								 money--;
			games++;
		}
		if (money == 0) lose++;
		else			win++;
	}

	cout << "�ʱ� �ݾ� $50" << endl;
	cout << "��ǥ �ݾ� $250" << endl;
	printf("1000 ���� %d�� �¸�\n", win);
	cout << fixed;
	cout.precision(6);
	cout << "�̱� Ȯ��=" << win / 10.0 << endl;
	cout << "��� ���� Ƚ�� = " << games / 1000.0;
}