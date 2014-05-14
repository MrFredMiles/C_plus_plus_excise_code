// cPremierExercise6_5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	long int salary=0;
	double tax=0;
	cout << "input your salary "<<endl;

	cin>> salary;
	while(salary >=0)
	{
		if(salary <= 5000)
			tax = 0;
		else if(salary <= 15000)
			tax = (double)salary * (double)0.1;
		else if(salary <= 35000)
			tax = (double)salary * (double)0.15;
		else 
			tax = (double)salary * (double)0.20;
		cout << "your salary is:" << salary <<"  tax is : "<<tax<<endl;

		cout<<"Next one :";  
		cin>>salary; 
		
	}
	

	cout << "over" <<endl;
	
	system("PAUSE");
	
	
	return 0;

}

