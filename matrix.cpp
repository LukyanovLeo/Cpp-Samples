#include <iostream>

using namespace std;

class safearay
{
private:
	int arr[10][10];    			//������������ ������ �������
	int lim1, lim2;			//���������������� �������
public:
	safearay(): lim1(2), lim2(5) 	//�����������, ���������������� ������� �������
	{				       //� ��������� �� �� �����
		cout << "������ i : " << lim1 << endl;
		cout << "������ j : " << lim2 << endl;
	}
	void putel(int i, int j, int v) //������� �������� �� ��������
	{
		if ((i>=0) && (i<=lim1) && (j>=0) && (j<=lim2))
			arr[i][j] = v;
		else
		{cout << "����� �� �������!"; system("pause"); cout << endl; exit(1); }
	}
	void getel(int i, int j) 		//������������ �������� �������� �� ��������
	{
		if ((i>=0) && (i<=lim1) && (j>=0) && (j<=lim2))
		cout << "������� � ��������� (" << i << "," << j << ") :" << arr[i][j] << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rUs");
	char ch;
	int index1, index2, value;
	safearay s;
	cout << "������� ������� �������� ������� � ������� \"i,j\" : ";
	cin  >> index1 >> ch >> index2;
	cout << "������� �������� �������� : ";
	cin  >> value;
	s.putel(index1, index2, value);
	s.getel(index1, index2);

	system("pause");
	return 0;
}
