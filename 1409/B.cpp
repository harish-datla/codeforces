#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin >> t;
while(t--){
	long long a,b,x,y,lim;
	cin >> a >> b >> x >> y >> lim;
	if(x < y){
		if(a < b){
			long long temp = a;
			a = a-x < lim ? x:a-lim;
			lim = lim - (temp-a);
			b = b - y < lim ? y : b - lim;
			cout << a*b << endl;
		}
		else
		{
			if(a-lim < y){
				int temp = a;
				a = a - lim > x ? a-lim : x;
				lim = lim - (temp-a);
				b = b-y < lim ? y : b - lim;
				cout << a*b << endl;
			}
			else
			{
				long long temp = b;
				b = b-y < lim ? y : b - lim;
				lim = lim - (temp - b);
				a = a - x < lim ? x : a - lim;
				cout << a*b << endl; 
			}
		}
	}
	else if(y <= x)
	{
		if(b < a){
			long long temp = b;
			b = b-y < lim ? y:b-lim;
			lim = lim - (temp-b);
			a = a - x < lim ? x : a - lim;
			cout << a*b << endl;
		}
		else{
			if(b - lim < x ){
				int temp = b;
				b = b - lim > y ? b-lim : y;
				lim = lim - (temp-b);
				a = a-x < lim ? x : a - lim;
				cout << a*b << endl;
			}
			else{
				long long temp = a;
				a = a - x < lim ? x : a - lim;
				// cout << a << " " << temp << endl;

				lim = lim  - (temp - a);
				b = b - y < lim ? y : b - lim;
				cout << a*b << endl;
			}
		}

	}
}

}
