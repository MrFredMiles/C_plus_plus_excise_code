// cPremierExercise6_3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	const int SIZE=10;
	char ch;
	bool flag=false;
	

	cout << "输入1个字母： "<<endl;
	cout<<"a) car       b)book"<<endl;
	cout<<"c) choose    d)dark"<<endl;
	if(flag == false)
	{
		cin >> ch;
		switch(ch)
		{
			case 'a' : cout << "you choose a) car "<<endl;break;
			case 'b' : cout << "you choose b)book "<<endl;break;
			case 'c' : cout << "you choose c) choose "<<endl;break;
			case 'd' : cout << "you choose d)dark "<<endl;break;
			default : cout << "input a char from a to d "<<endl;
		}
		if(( (int)ch >= 65 && (int)ch <= 90 ) || ( (int)ch >= 97 && (int)ch <= 122))
			flag = false ;
		else
			flag = true ;
			
		
	}
	cout <<"\nover"<<endl;
	system("PAUSE");
	
	
	return 0;

}

