#include <iostream>

using namespace std;

struct time
{
	int hours;    
	int minutes;	
	int seconds;
};
long time_to_secs(time t)
{
	long totalsec;
	totalsec = (t.hours * 3600) + (t.minutes * 60) + t.seconds;   
//������� �����, ����� � ������ � �������
	return totalsec;
}

void secs_to_time(long ttl)
{
	time t;
	t.hours = ttl / 3600;
	t.minutes = ttl % 3600 / 60;    //������� ������ � ������ ��:��:��
	t.seconds = ttl % 3600 % 60;
	cout << "����� 2-� ����� : " << t.hours << ":" << t.minutes << ":" << t.seconds << endl;				//� ����� ��������
}

int main()
{
	setlocale(LC_ALL, "rUs");
	time t1, t2;
	char ch;
	long totalsec1 = 0, totalsec2 = 0, totalsec;	//

	cout << "������� ����� �1 (� ������� ��:��:��) : ";				  
	cin  >> t1.hours >> ch >> t1.minutes >> ch >> t1.seconds; 

	cout << "������� ����� �2 (� ������� ��:��:��) : ";			       
	cin  >> t2.hours >> ch >> t2.minutes >> ch >> t2.seconds;  

	totalsec1 = time_to_secs(t1);      //������������� 1 ������� �� ����������� ��� 2 
	totalsec2 = time_to_secs(t2);      //�������� �������� ������� 
	totalsec = totalsec1 + totalsec2;  //�������� ���������� ��������
	secs_to_time(totalsec);	        //������� ����� � ������ ��:��:��

	system ("pause");
	return 0;
}
