#include <iostream> 
using namespace std;
int main() {
	int a = 10;
	int b = 4;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;

	a += ++b; // a = a + (++b) 
	cout << a << endl; // 15
	cout << b << endl; // 5

	a += b++; // a = a + (b++)
	cout << a << endl; // 20
	cout << b << endl; // 6

	return 0;
}