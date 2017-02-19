#include <iostream>
#include <stdlib.h>
#include <cstring> //��� strlen()
#include <iomanip> //��� setprecision()
using namespace std;
const int SZ = 100;

class Money 
{
private:
	char money[SZ]; 
	long double newmoney;
public:
	Money()
	{ }
	void mstold(char mas[]) //������� ������ � ���� ���� long double
	{			    
	for (int i=0, j=0; i<strlen(mas); i++)
		{
			if (isdigit(mas[i]) || mas[i] == '.') 
//������� ��������� ��� ������� �� ������ ����� ����
			{
			money[j++] = mas[i];
			} 
		}
		newmoney = atof(money);
	}
	void get_money() const //��������������� ����� �������� �����
	{ cout << "���� ����� : " << fixed << setprecision(2) << newmoney << endl; }
	
};

int main () 
{ 
	setlocale (LC_ALL, "rus");

	char mas[100], ch;
	Money m;
	
	do
	{
	cout << "������� �������� ����� : ";
	cin >> mas;
	m.mstold(mas);
	m.get_money();
	cout << "\n���������� (y/n) ? ";
	cin >> ch;
	}
	while (ch != 'n');
	system("pause");
	return 0;
}
