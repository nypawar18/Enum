/*
 * Enum.cpp
 *
 *  Created on: 08-May-2020
 *      Author: Nitin
 */
#include<iostream>
#include<string>
using namespace std;

int main()
{
	enum Week{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
	enum Emp_martial{unmarried,married,widow,devorce};
	string name;

	cout<<"Enter name of employee \n";
	getline(cin,name);
	Week w;
	Emp_martial e;
	w=Thursday;
	e=married;
	cout<<"Name= "<<name<<" Week= "<<w<<" Emp_martial="<<e;
	return 1;
}



