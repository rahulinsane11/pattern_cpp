#include <iostream>
using namespace std;

int main()
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<4-i; j++) // for(int j=5; j>i; j--)
			cout << " ";
		for(int j=0; j<=i; j++)
			cout << "*";
		cout << endl;
	}	
	return 0;
}

/*
for(int i=0; i<5; i++)
{
	for(int j=0; j<5; j++)
	{
		if(i+j<4)
			cout << " ";
		else 
			cout << "*";
	}
	cout << endl;
}
*/