// cPremierExercise6_2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	const int SIZE=10;
	int i,count=0;
	double number,SUM=0,AVG=0;

	cout << "����10��donation�� "<<endl;
	cin >>number;
	for(i=0;i<SIZE;i++)
	{
		if(isalpha((int)number))
		{
			cout << "���������˳�"<<endl;
			i=SIZE;
		}
		else 
		{
			count++;
			SUM=SUM+number;
			cout << "��"<<count <<"����"<<number<<endl;
		}
		if(i<SIZE)	
			cin >> number;

	}
	AVG=SUM/count;
	cout << "�ܼ�"<<count<<"��"<<endl;
	cout <<"�ͣ�"<<SUM<<endl;
	cout <<"ƽ��ֵ��"<<AVG<<endl;
	cout <<"\nover"<<endl;
	system("PAUSE");
	
	
	return 0;

}

