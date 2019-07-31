#include <iostream>

using namespace std;

int main()
{
	int y, w;
	cin >> y >> w;
	int max = (y > w) ? y : w;
	int ans = 6 - max + 1;
	if ((ans != 6) && (ans != 5)) {
		if (ans != 1) {
			if (ans % 2 == 0)
				cout << ans / 2 << "/" << 6 / 2 << endl;
			else if (ans % 2 != 0)
				cout << ans / 3 << "/" << 6 / 3 << endl;
		}
		else
			cout << ans << "/" << 6 << endl;
	}
	else if (ans == 5)
		cout << ans << "/" << 6 << endl;
	else 
		cout << "1/1" << endl;

	return 0;
}

