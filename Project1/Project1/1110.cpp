#include <iostream>
using namespace std;

int main() {
	int a;
	//�Է����� 0���� 99���� ���� �Է�
	while (1) {
		cin >> a;
		if (a >= 0 && a <= 99)
			break;
		else
			continue;
	}

	//������ �����Ҷ����� �ݺ��ϸ鼭 cycleȽ���� ������Ŵ
	int first = a;
	int cycle=0;
	while(1){
		cycle++;
		if (a < 10) {
			a = 10 * a + a;
		}
		else {
			a = (a % 10)*10 + ((a + (a / 10)) % 10);
		}
		if (first == a) {
			break;
		}
		
	}
	cout << cycle;
	
}