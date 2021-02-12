#include<bits/stdc++.h>
using namespace std;


int main(){
	
	vector<deque<int>> a(1001);
	deque<int> q ;
	q.push_back(3);
	q.push_back(1);
	q.push_back(4);
	q.push_back(2);
	a[4] = q;
	for(int i = 5; i <= 1000 ; i++){
		deque<int> temp = a[i-1];
		if(i - temp[0] > i - temp[temp.size() - 1]){
			temp.push_front(i);
		}
		else
		{
			temp.push_back(i);
		}
        a[i]=temp;
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(n == 2|| n == 3){
			cout << -1 << endl;
            continue;
		}
		for(int i = 0 ; i < a[n].size() ; i++){
			cout << a[n][i] << " ";
		}
		cout << endl;
	}


}