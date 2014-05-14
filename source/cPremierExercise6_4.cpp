// cPremierExercise6_3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>


int main()
{
	using namespace std;
	const int strSIZE=50;
	char ch;
	bool flag=false;

	struct bop{
		char fullname[strSIZE];
		char title[strSIZE];
		char bopname[strSIZE];
		int preference;

	};
	bop bopone = { "Fred","Manager","MR.Fred",3 };
	cout << "choose one char between a to d "<<endl;
	cout << "you can input q to quit"<<endl;
	cout << "a.display by fullname   b.display by title "<<endl;
	cout << "c.display by bopname    d.display by preference "<<endl;
	cout << "q.quit"<<endl;
	cin>>ch;
	while(ch != 'q')
	{
		
		switch(ch)
		{
			case 'a' : cout << bopone.fullname<<endl;break;
			case 'b' : cout << bopone.title<<endl;break;
			case 'c' : cout << bopone.bopname<<endl;break;
			case 'd' : if(bopone.preference == (int)1)
							cout << bopone.fullname<<endl;
					   else if(bopone.preference == (int)2)
							cout << bopone.title<<endl;
					   else
							cout << bopone.bopname<<endl;
						break;
			default : ;
		}
		cout<<"Next Choice:";  
		cin>>ch; 
		
	}
	

	cout << "over" <<endl;
	
	system("PAUSE");
	
	
	return 0;

}

