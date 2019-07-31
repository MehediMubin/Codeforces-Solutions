#include <iostream>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;
	int max = (m < k) ? m : k;
	if (max < n) 
		cout << "No" << endl;
	else 
		cout << "Yes" << endl;

	return 0;
}
