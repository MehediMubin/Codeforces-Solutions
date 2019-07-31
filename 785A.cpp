#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0;
	cin >> n;
	char str[12];
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str[0] == 'T') sum += 4;
		else if (str[0] == 'C') sum += 6;
		else if (str[0] == 'O') sum += 8;
		else if (str[0] == 'D') sum += 12;
		else if (str[0] == 'I') sum += 20;
	}
	cout << sum << endl;

	return 0;
}
