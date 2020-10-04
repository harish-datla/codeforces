    #include<bits/stdc++.h>
    using namespace std;
     
     
    int main(){
    	int n,x,y;
    	cin >> n >> x >> y;
    	vector<pair<int,int>> s;
    	for(int i = 0 ; i < n ; i++){
    		int p,q;
    		cin >> p >> q;
    		s.push_back({p,q});
    	}
    	vector<pair<int,int>> dir = {{1,0},{0,1},{-1,0},{0,-1}};
    	int ans = 0;
        int out_a ;
        int out_b ;
    	for(int i = 0 ; i < 4 ; i++){
    		int a = x +  dir[i].first;
    		int b = y + dir[i].second;
    		int temp = 0;
    		for(int i = 0 ; i < n ; i++){
    			if( a >= min(x,s[i].first) &&  a <= max(x,s[i].first) && b >= min(y,s[i].second) &&  b <= max(y,s[i].second)){
    				temp++;
    			}
    		}
    		if(temp > ans){
                out_a = a;
                out_b = b;
            }
            ans = max(ans,temp);
            
    	}
    	cout << ans << endl;
        cout << out_a << " " << out_b << endl;
     
     
    }
