#include <iostream>
using namespace std;

int main(){
	for (int i = 1; i <= 9; i++){	
		for (int a = 1; a <= 9; a++){
			cout << i << "x" << a << "=" << a*i << "	";
		}
		cout << endl;
	}
}
