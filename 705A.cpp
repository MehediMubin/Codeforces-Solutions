#include <iostream>

using namespace std;

int main()
{
	int n;
	char str[] = "I hate";
	char s[] = "I love";
	cin >> n;
	if (n == 1) {
		cout << "I hate it" << endl;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (i != n) {
				if (i % 2 != 0) {
					cout << str << " " << "that ";
				}
				else if (i % 2 == 0) {
					cout << s << " " << "that ";
				}
			}
			if (i == n) {
				if (i % 2 == 0) {
					cout << s << " " << "it" << endl;
				}
				else if (i % 2 != 0) {
					cout << str << " " << "it" << endl;
				}
			}
		}
	}

	return 0;
}
