// cPremierExercise6_5.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "\ninput �� "<< i+1 <<"�������֣� ";
		cin >> q->name ;
		cout << "\ninput �� "<< i+1 <<"���ľ� ";
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

