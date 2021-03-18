#include <iostream>
using namespace std;

int main() {
	int max = -1000000;
	int min =  1000000;
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}

	}
	cout << min << " " << max;
	delete[] arr;
}