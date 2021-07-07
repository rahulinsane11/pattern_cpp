#include <iostream>
using namespace std;

int main()
{
	int x=65;  // ASCII value of 'A' is 65
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<=i; j++)
			cout << char(x+i) << " ";  // convert ASCII to char
		cout << endl;
	}
	return 0;
}