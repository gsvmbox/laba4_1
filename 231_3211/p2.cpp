// p2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

 
int main()
{
	setlocale(0, "");

    int rows = 3;       // ���������� �����
    int columns = 2;    // ���������� ��������
     // �������� ������ ��� ��������� ������
	int** numbers = new int*[rows]; //������� �������� ������ ��� ������� ����������
    for (int i=0; i < rows; i++)
    {
        numbers[i] = new int[columns]; //����� � ����� �������� ������ ��� ������� ���������� ������� 
    }
 
    // ������ ������ ��� ������� rows x columns
    for (int i=0; i < rows; i++)
    {
        cout << "������� ������ " << (i + 1) << " ������" << endl;
        // ������ ������ ��� �������� i-� ������
        for (int j=0; j < columns; j++)
        {
            cout << (j + 1) << " �������: ";
            cin >> numbers[i][j];
        }
    }
    // ����� ������
	cout<<numbers<<endl; //����� ��������� �� ������ ����������**
	//cout<<**numbers<<endl;
    for (int i=0; i < rows; i++)
    {
        cout<<(numbers+i)<<"\t";		//������ ����� ������� ����������**
		cout<<*(numbers+i)<<"\t";	//���������� ����� ������� ����������**
		// ������� ������ �������� i-� ������
        for (int j=0; j < columns; j++)
        {
            cout << numbers[i][j] << "\t"; //�������� �� ������
			cout << (numbers[i]+j)<< "\t";  //�����
		}
        cout << endl;
    }
     
    /*������������ ������ ���� � �������� ������� - 
	������� ����������� ������ ��� ������� ���������� ���������� �������, 
	� ����� ��� ����� ������� ����������.	*/

	for (int i=0; i < rows; i++)
    {
        delete[] numbers[i];
    }
    delete[] numbers;

	return 0;
}

