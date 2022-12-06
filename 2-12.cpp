// 연습문제 2-12
#include <iostream>

using namespace std;

int main()
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			cout << "박수" << " ";
		else
			cout << i << " ";
	}
	return 0;
}