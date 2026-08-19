#include <iostream> 
using namespace std;

inline int kareAl(int sayi) {
	return sayi * sayi;
}

inline int topla(int a, int b) {
	return a + b;
}

int main() {
	int x = 5;
	int y = 6;

	cout << x << "Sayisinin karesi: " << kareAl(x) << endl;
	cout << x << " + " << y << " = " << topla(x, y) << endl;
	return 0;
}