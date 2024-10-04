#include<iostream>

using namespace std;

int main()
{
	string nickname, courseInyear, school;
	
	cout << "Enter your nickname\t\t:\t";
	cin >> nickname;
	
	cout << "Course-Year Level\t\t:\t";
	cin >> courseInyear;
	
	cout << "School\t\t\t\t:\t";
	cin >> school;
	cout << "______________________________________________________________________________________________________\n" << endl;
	cout << "Wow Congrats "<< nickname << "! " << courseInyear << " is a nice course, And you are studying" << endl;
	cout << "in " << school << " which is one of the Center of Excellence in Tertiary Education" << endl;
	
	
return 0;
	
}