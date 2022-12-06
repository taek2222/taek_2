// 연습문제 2-16

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

	cout << "초기 금액 $50" << endl;
	cout << "목표 금액 $250" << endl;
	printf("1000 중의 %d번 승리\n", win);
	cout << fixed;
	cout.precision(6);
	cout << "이긴 확률=" << win / 10.0 << endl;
	cout << "평균 배팅 횟수 = " << games / 1000.0;
}