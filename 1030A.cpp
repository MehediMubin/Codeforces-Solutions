#include <iostream>

using namespace std;

int main()
{
	int n, a, counter = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		if (a == 1) {
			counter++;
			break;
		}
	}
	if (counter != 0) 
		cout << "Hard" << endl;
	else 
		cout << "Easy" << endl;
}
