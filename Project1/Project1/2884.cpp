#include <iostream>
using namespace std;
//if�� ��� ���������� 0���� ��� 45�� ������ �ð��� �ű���� ������ ���� ������ 23�÷� �ٲ�
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