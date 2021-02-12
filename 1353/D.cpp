#include<bits/stdc++.h>
using namespace std;
 
struct comp {
    bool operator() (const pair<int,pair<int,int>>& lhs,const pair<int,pair<int,int>>& rhs){
    	if(lhs.first > rhs.first)
    	{
    		return true;
    	}
    	else if(lhs.first < rhs.first){
    		return false;
    	}
    	else
    	{
    		
    	if(lhs.second.first < rhs.second.first){
    		return true;
    	}
    	else
    	{
    		return false;
    	}
    	}
    	
    	return false;
    }
};
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
        cin >> n;
        vector<int> a(n,0);
        set <pair<int,pair<int,int>>, comp> s;
        s.insert({n,{0,n-1}});
        int i = 1;
        while(i <= n){
            pair<int,pair<int,int>> it = *s.begin();
            s.erase(it);
            int l = it.second.first;
            int r = it.second.second;
            if(l > r){
                continue;
            }
            // if(l == 3){
            // 	cout << it->first << endl;
            // }
            // if(l == 1){
            // 	cout << it->first << endl;
            // 	cout << "x" << endl;
            // 	cout << it->second.second << endl;
            // }
            if((r-l+1)%2){
                a[(r+l)/2] = i;
                i++;
                if((r+l)/2 - 1 >= l){
                    s.insert({(r+l)/2 - l,{l,(r+l)/2 - 1}});
                }
                if((r+l)/2 + 1 <= r){
                    s.insert({r -((r+l)/2),{(r+l)/2+1,r}});
                }
            }
            else
            {
                a[(r+l-1)/2] = i;
                i++;
                
                if((r+l-1)/2 - 1 >= l){
                    s.insert({(r+l-1)/2 - l,{l,(r+l-1)/2 - 1}});
                }
                if((r+l-1)/2 + 1 <= r){
                    s.insert({r - ((r+l-1)/2),{(r+l-1)/2+1,r}});
                }                
            }
            
        }
        for(int j = 0 ; j < n ; j++){
            cout << a[j] << " ";
        }
        cout << endl;    
	}
 
}