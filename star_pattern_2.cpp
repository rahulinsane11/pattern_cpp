#include <iostream>
using namespace std;

int main()
{
	for(int i=0; i<5; i++)
	{
		for(int j=5; j>i; j--)   // for(int j=0; j<=4-i; j++) 
			cout << "*";
		cout << endl;
	}
	return 0;
}