#include <iostream>
using namespace std;

int main()
{
	int x=1;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<=i; j++)
			cout << x++ << " ";
		cout << endl;
	}
	return 0;
}