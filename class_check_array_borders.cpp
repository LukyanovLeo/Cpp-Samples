#include <iostream>

using namespace std;

const int LIMIT = 30;
class safearay
{
private:
	int arr[LIMIT];
public:
	void putel(int i, int v) 		//������� �������� �������� �� ��� ��������
	{
		if ((i>=0) && (i<=LIMIT))  //�������� �������������� ��������
			arr[i] = v;
		else			
		{cout << "����� �� �������!"; system("pause"); cout << endl; exit(1); }
	}
	void getel(int i)			//����� �������� �� ��� ��������
	{
		if ((i>=0) && (i<=LIMIT))
		cout << "������� � �������� " << i << " :" << arr[i] << endl;
		else
		{cout << "����� �� �������!"; system("pause"); cout << endl; exit(1); }
	}
};

int main()
{
	setlocale(LC_ALL, "rUs");
	int index, value;
	safearay s;
	cout << "������ ������� : " << LIMIT << "\n������� ������ � �������� �������� ������� : ";
	cin  >> index >> value;
	s.putel(index, value);
	s.getel(index);

	system("pause");
	return 0;
}
