#include<iostream>
#include<vector>
#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;

vector<pair<int, int>>v;
int N;
int a, b,k=0;
int cnt = 0;
int total;
int finaltime=0;


int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		v.push_back(pair<int, int>(b, a));
	}

	sort(v.begin(), v.end());
	//for (int i = 0; i < N; i++) {//������ Ȯ���ϴ� �ݺ���
	//		cout << v[i].first << " " << v[i].second << endl;
	//	
	//}
	
		for (int j = 0; j < N; j++) {
			if (finaltime <= v[j].second) {
				finaltime = v[j].first;
				//cout << v[j].first <<" "<< v[j].second << "\n";//�������� ������ų �۾�
				cnt++;
			}
	}
	cout << cnt;
}

