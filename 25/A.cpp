#include<bits/stdc++.h>
using namespace std;


int main(){
	int n,x,y;
	cin >> n ;
	vector<int> a(n);
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
	}

	int odd = 0;
	int last_odd;
	int even = 0;
	int last_even;
	for(int i = 0 ; i < n ; i++){
		if(a[i]%2){
			odd++;
			last_odd = i;
		}
		else{
			even++;
			last_even = i;
		}
	}
	if(odd == 1){
		cout << last_odd +1<< endl; 
	}
	else
	{
		cout << last_even +1<< endl;
	}
	


}