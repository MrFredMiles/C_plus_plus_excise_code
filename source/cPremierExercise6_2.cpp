// cPremierExercise6_2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	const int SIZE=10;
	int i,count=0;
	double number,SUM=0,AVG=0;

	cout << "输入10个donation： "<<endl;
	cin >>number;
	for(i=0;i<SIZE;i++)
	{
		if(isalpha((int)number))
		{
			cout << "输入有误，退出"<<endl;
			i=SIZE;
		}
		else 
		{
			count++;
			SUM=SUM+number;
			cout << "第"<<count <<"个是"<<number<<endl;
		}
		if(i<SIZE)	
			cin >> number;

	}
	AVG=SUM/count;
	cout << "总计"<<count<<"个"<<endl;
	cout <<"和："<<SUM<<endl;
	cout <<"平均值："<<AVG<<endl;
	cout <<"\nover"<<endl;
	system("PAUSE");
	
	
	return 0;

}

