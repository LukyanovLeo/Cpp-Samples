#include <iostream>

using namespace std;

int swap(int c)
{
	static int num = 0;
	num++;		//������� ����������� �� 1 �������� ��������� static-���������� 
	return num;	//� ���������� � ��������
}

int main()
{
	setlocale (LC_ALL, "rUs");
	int func;

	for (int i=0; i<10; i++)
	{
		func = swap(0);	 //����������� ������� ���-�� ������� �������
	}


	cout << "������� ���� ������� " << func << " ���\n";  
//����� ���-�� ��� ������ �������

	system ("pause");
	return 0;
}
