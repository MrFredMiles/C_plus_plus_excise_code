// cPremierExercise6_1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	const int SIZE=20;
	char getCharArray[SIZE];
	//char outCharArray[SIZE];
	int i;
	cout << "输入一些字符串： "<<endl;
	cin.getline(getCharArray,SIZE);
	for(i=0;i<=SIZE&&getCharArray[i]!='@';i++)
	{
		if(isdigit(getCharArray[i]))
			continue;
		else if(!isalpha(getCharArray[i]))
			getCharArray[i]='\b';
		else if(isupper(getCharArray[i]))
			getCharArray[i]=tolower(getCharArray[i]);
		else
			getCharArray[i]=toupper(getCharArray[i]);

		cout <<getCharArray[i];

	}
	cout <<"\nover"<<endl;
	cin.get();
	cin.get();
	
	
	return 0;

}

