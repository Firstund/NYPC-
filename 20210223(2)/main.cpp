#include <iostream>

using namespace std;

int main()
{
	int H;
	int mH;
	int T;
	int a;
	int h;
	// 1: ������
	// 2: ȸ��
	// 3: �ִ�ü������ ȸ��

	cin >> H >> T;

	if (H < 1)
		H = 1;
	else if (H > 100)
		H = 100;
	if (T < 3)
		T = 3;
	else if (T > 100)
		T = 100;

	for (int i = 0; i < T; i++)
	{
		cin >> a >> h;
		switch (a)
		{
		case 1:
			H -= h;
			break;
		case 2:
			H += h;
			break;
		case 3:
			H += h;
			mH = H;
			break;
		}
	}

	cout << mH << endl;

	return(0);
}