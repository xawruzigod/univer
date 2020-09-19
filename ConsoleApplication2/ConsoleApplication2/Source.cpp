#include <iostream>
int main() {
	using namespace std;
	int a;
	cin >> a;
	int b = 0;
	int t = 0;
	while (t < a) {

		if (t % 2 == 0) {
			b++;

		}
	
		t++;
	}
	cout << "Koli4estvo 4etnikh 4isel: " << b;
} 
