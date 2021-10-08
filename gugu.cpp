#include <iostream>
using namespace std;

int main()

{
	int t = 0;
	for (int i = 1; i < 9; i++)
	{	
		for (int a = 1; a < 9; a++)

		{	t = i * a;
			cout << a << "x" << i << "=" << t << "	";
		}
		cout << endl;
	}
}
