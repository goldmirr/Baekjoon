#include <iostream>
using namespace std;
//실행속도 올리는 두 가지 방법 
// ios::sync_with_stdio(false)  : c표준스트림과 c++표준 스트림 동기화 끊기.
// cin.tie(NULL)  : cin과 cout의 묶음을 풀어준다. 스트림 버퍼 공유를 끊음.
int main() {
	cin.tie(NULL); 
	ios::sync_with_stdio(false);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int a, b;
		cin >> a >> b;
		cout << a + b << "\n";
	}

	return 0;
}