#include <iostream>

using namespace std;

bool check(const char* a);
int main()
{
	char password[20];

	cout << "����� ��й�ȣ�� �Է��� �ּ���: ";
	cin >> password;

	if (check(password))
		cout << "valid" << endl;
	else
		cout << "invalid" << endl;

	return(0);
}
bool check(const char* a)
{
	bool x = false; // �ҹ���
	bool y = false; // �빮��
	bool z = false; // Ư������
	bool t = false; // ����

	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			x = true;
		if (a[i] >= 65 && a[i] <= 90)
			y = true;
		if ((a[i] >= 33 && a[i] <= 47) || (a[i] >= 58 && a[i] <= 63) || a[i] == 91 || (a[i] >= 93 && a[i] <= 96) || (a[i] >= 123 && a[i] <= 125) )
			z = true;
		if (strlen(a) >= 8 && strlen(a) <= 15)
			t = true;
	}

	return (x && y && z && t);
}