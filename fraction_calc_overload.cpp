#include <iostream>
#include <cmath>

using namespace std;

class fraction
{
private:
	int num, den;
public:
	fraction(): num(0), den(0)
	{ }
	fraction(int n, int d): num(n), den(d)
	{ }
	void set_frac() 	//������������� ������
	{
		static int count = 0;
		++count;	//����� �����
		char ch;
		cout << "������� " << count << " ����� � ������� \"(a/b)\" : ";
		cin  >> num >> ch >> den;
	}
	fraction operator+ (fraction f)	//��������
	{
		int n = (num*f.den) + (f.num*den);
	    int d = den*f.den;
		return fraction(n, d);
	}
	fraction operator- (fraction f)	//���������
	{
		int n = (num*f.den) - (f.num*den);
	    int d = den*f.den;
		return fraction(n, d);
	}
	fraction operator* (fraction f)	//���������
	{
		int n = num*f.num;
		int d = den*f.den;
		return fraction(n, d);
	}
	fraction operator / (fraction f)	//�������
	{
		int n = num*f.den;
		int d = f.num*den;
		return fraction(n, d);
	}
	void lowterms()			//���������� �����
	{
	long tnum, tden, temp, gcd;
	tnum = labs(num);			//���������� ��������������� ��������
	tden = labs(den);			//����� cmath
	if(tden == 0) 
	{					//�������� ����������� 
		cout << "�����������. �������: ������������ �����������\n"; 
		system("pause");
		exit(1);
		return;
	} 
	else if(tnum == 0) 
	{
		num = 0;
		den = 1;
		return;
	}
// ���������� ����������� ������ �������� 
	while(tnum != 0) 
	{
	if(tnum < tden) 
		{		//���� ��������� ������ �����������, ������ �� �������
			temp = tnum;
			tnum = tden;
			tden = temp;
		}
	tnum = tnum - tden;
	}
	gcd = tden;		//����� ��������� � ����������� �� ���
	num = num / gcd;
	den = den / gcd;
	cout << num << "/" << den << endl;
	}
};
int main()
{
	setlocale(LC_ALL, "rUs");
	fraction f, f1, f2;
	char ch;
	do
	{
	f1.set_frac();
	f2.set_frac();
	cout << "����� �������� ����� ��������� ��� ����� ������� (+,-,*,/) ";
	cin  >> ch;
	switch(ch)	//����� ���������� � �������, ��������� �� ��������
		{
		case '+':
			f = f1 + f2;
			cout << "��������� �������� : ";
			f.lowterms();
			break;
		case '-':
			f = f1 - f2;
			cout << "��������� ��������� : ";
			f.lowterms();
			break;
		case '*':
			f = f1 * f2;
			cout << "��������� ��������� : ";
			f.lowterms();
			break;
		case '/':
			f = f1 / f2;
			cout << "��������� ������� : ";
			f.lowterms();
		}
	cout << "���������� (y/n) ? ";
	cin  >> ch;
	}
	while(ch != 'n');
	system("pause");
	return 0;
}
