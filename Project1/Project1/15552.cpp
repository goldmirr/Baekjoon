#include <iostream>
using namespace std;
//����ӵ� �ø��� �� ���� ��� 
// ios::sync_with_stdio(false)  : cǥ�ؽ�Ʈ���� c++ǥ�� ��Ʈ�� ����ȭ ����.
// cin.tie(NULL)  : cin�� cout�� ������ Ǯ���ش�. ��Ʈ�� ���� ������ ����.
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