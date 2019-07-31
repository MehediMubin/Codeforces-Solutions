#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, arr[101], a[101], j = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		a[i] = arr[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		int N = n - 1;
		if (a[j] == arr[i]) {
			cout << (i + 1) << " ";
			j++;
		}
		if (i == N) {
			i %= N;
			i--;
		}
		if (j == n) break;
	}

	return 0;
}
