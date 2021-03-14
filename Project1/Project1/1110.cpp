#include <iostream>
using namespace std;

int main() {
	int a;
	//입력조건 0부터 99사이 값만 입력
	while (1) {
		cin >> a;
		if (a >= 0 && a <= 99)
			break;
		else
			continue;
	}

	//조건을 만족할때까지 반복하면서 cycle횟수를 증가시킴
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