#include <iostream>
using namespace std;

int main()
{
	int x=65;  // ASCII value of 'A' is 65
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5-i; j++)
			cout << char(x+j) << " ";  // convert ASCII to char
		cout << endl;
	}
	return 0;
}