#include <iostream>
using namespace std;
//변형된 평균 구하기 20번쨰줄에서 '/'연산자는 나누기 연산자가 아니라 몫을 구하는 연산자인거 사실 까먹지 말기
int main() {
	int n;
	cin >> n;
	int* score= new int[n];
	int real_score;
	double fake_score;
	int max = 0;

	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (score[i] > max) {
			max = score[i];
		}
	}
	double sum=0;

	for(int i =0;i<n;i++){
		fake_score = (float)score[i] / (float)max * 100;
		sum += fake_score;
	}
	cout.precision(4);
	cout << sum / n;
	
}