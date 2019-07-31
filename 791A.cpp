#include <iostream>

using namespace std;

int main()
{
	int a, b, counter = 0;
	cin >> a >> b;
	while (1) {
		a *= 3;
		b *= 2;
		counter++;
		if (a > b)
			break;
	}
	cout << counter << endl;

	return 0;
}
