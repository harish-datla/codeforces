#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;
	cin >> t;
	while(t--){
		int n , mini,maxi;
		cin >> n >> mini >> maxi;
		int x = n - 2;
		if(x == 0){
			cout << mini << " " << maxi << endl;
			continue;
		}
		int p = x;
		int diff;
		while(true){
			if((maxi-mini)%(p+1) == 0){
				diff = (maxi- mini) / (p+1);
				break;
			}
			else
			{
				p--;
			}
		}
		int g = x - (p);
		vector<int> out;
		out.push_back(mini);
		out.push_back(maxi);
		 int temp = mini-diff;
		while(temp > 0 && g > 0){
			out.push_back(temp);
			temp = temp - diff;
			g--;
		}
		temp = maxi+diff;
		while(g > 0){
			out.push_back(temp);
			temp = temp+diff;
			g--;
		}
		temp = mini;
		// p--;
		while(p > 0){
			
			temp = temp+diff;
			out.push_back(temp);
			p--;
		}
		for(int i = 0 ; i < out.size() ; i++){
			cout << out[i] << " ";
		}
		cout << endl;


	}
}