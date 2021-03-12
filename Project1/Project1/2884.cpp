#include <iostream>
using namespace std;
//if문 사용 주의할점은 0시인 경우 45분 전으로 시간을 옮기려면 전날로 가기 때문에 23시로 바뀜
int main() {
	int H, M;

	while (1) {
		cin >> H >> M;
		if (H >= 0 && H <= 23 && M >= 0 && M <= 59) {
			break;
		}
		else {
			cout << "put time again" << endl;
			continue;
		}
	}

	if (H == 0) {
		if (M >= 45) {
			cout << H << " " << M - 45 << endl;
		}

		else {
			cout << 23 << " " << 15 + M << endl;
		}
	}
	else {
		if (M >= 45) {
			cout << H << " " << M - 45 << endl;
		}

		else {
			cout << H - 1 << " " << 15 + M << endl;
		}

	}

}