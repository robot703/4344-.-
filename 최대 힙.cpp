#include<iostream>
#include<queue>
#include<functional>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);

	int n,a;

	priority_queue<int, vector<int>, less<int>>pq;

	cin >> n;


	for (int i = 0; i < n; i++) {
		cin >> a;
		
		if ( a== 0) {
			if (pq.empty()) cout << "0\n";
			// queue�� ������� ��� 0 ���
			else {
				cout << pq.top() << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(a);
		}
	}
	return 0;
}