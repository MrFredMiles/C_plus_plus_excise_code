// cPremierExercise6_5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct donation
{
	string name;
	double num;
};
int main()
{
	
	int number=0;
	int numGP=0;
	int numP=0;
	cout << "input the number of what you want to record"<<endl;
	cin >> number;
	donation *p = new donation[number];
	donation *q = p;
	int i=0;
	while(i<number)
	{
		cout << "\ninput 第 "<< i+1 <<"个的名字： ";
		cin >> q->name ;
		cout << "\ninput 第 "<< i+1 <<"个的捐款： ";
		cin >> q->num;
		if(q->num < 10000)
			numP++;
		else 
			numGP++;
		i++;
		q++;

	}
	q=p;
	i=0;
	cout <<"Grand Patrons"<<endl; 
	if( numGP == 0)
		cout <<"none"<<endl;
	while(i<=numGP && numGP>0 )
	{
		if(q->num > 10000)
			cout << q->name <<" : "<<q->num<<endl;
		q++;
		i++;
	}
	q=p;
	i=0;
	cout <<"Patrons"<<endl;
	if(numP == 0)
		cout <<"none"<<endl;
	while(i<=numP && numP>0 )
	{
		if(q->num <= 10000)
			cout << q->name <<" : "<<q->num<<endl;
		q++;
		i++;
	}

	delete [] p;



	
	system("PAUSE");
	
	
	return 0;

}

