#include <iostream>

using namespace std;


struct sterling
{
	int pound, shil, penni;  //��������� �� ����������� 
};				    //�������� ������� ������� �������

void get_sterling(int, int, int, sterling&);  		 //������� �� int � ����������� ���
void sum_and_transform(sterling&, sterling, sterling); //�������� ��������
void show_sterling(sterling); 				 //����� ��������
int main()
{
	setlocale (LC_ALL, "rus");

	int pound_1, shil_1, penni_1,
		pound_2, shil_2, penni_2;
	sterling p1, p2, p;
	char ch; 

	cout << "������� ������ �������� ����� � ������� \"�����.��������.�����\" : ";
	cin  >> pound_1 >> ch >> shil_1 >> ch >> penni_1;   //���� ��������
	
	cout << "������� ������ �������� ����� � ������� \"�����.��������.�����\" : ";
	cin  >> pound_2 >> ch >> shil_2 >> ch >> penni_2;

	get_sterling(pound_1, shil_1, penni_1, p1);
	get_sterling(pound_2, shil_2, penni_2, p2);  //���������� �����
	sum_and_transform(p, p1, p2);
	show_sterling(p);

	system ("pause");
	return 0;
}
void get_sterling(int f, int s, int p, sterling& pp)
{
	pp.pound = f;
	pp.shil = s; 
	pp.penni = p;
}
void sum_and_transform(sterling& pp, sterling pp1, sterling pp2)
{
	int a, b, all;  //��������� ����������, ����������� ��� ������ �����
	a = (pp1.pound*240) + (pp1.shil*12) + pp1.penni; //����� ���-�� ������ � �����
	b = (pp2.pound*240) + (pp2.shil*12) + pp2.penni;
	all = a + b; 			//����� ���-�� ������ � 2-� ������
	a = all / 240; 		//���������� ������ ����� ��������
	b = (all % 240) / 12; 	//���������� ��������� ����� ��������    
	all = ((all % 240) % 12); //���������� ������ ����� ��������
	pp.pound = a; 	//���������� ���������� ���� �������� ����������� ����������
	pp.shil = b; 
	pp.penni = all;
}
void show_sterling(sterling pp)
{
	cout << "����� �������� �������� ����� : " << pp.pound << "." << pp.shil << "." << pp.penni << endl;  //����� ���������� � ������ �������
}
