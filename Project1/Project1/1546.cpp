#include <iostream>
using namespace std;
//������ ��� ���ϱ� 20�����ٿ��� '/'�����ڴ� ������ �����ڰ� �ƴ϶� ���� ���ϴ� �������ΰ� ��� ����� ����
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