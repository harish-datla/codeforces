#include<bits/stdc++.h>
using namespace std;


int main(){
    string a,b;
    while(cin >> a >> b){
        if(a.size() < b.size()){
            swap(a,b);
        }
        int overlap = 0;

        for(int i = -b.size() ; i < (int)a.size() ; i++){
            int maxi = 0;
            bool flag = true;
            for(int j = 0 ; j < b.size() ; j++){
                if(i+j >= 0 && i+j < a.size()){
                    if(a[i+j] -'0'+ b[j] - '0' <= 3 ){
                        maxi++;
                    }else{
                        flag = false;
                        break;
                    }
                } 
            }
            if(flag){
            overlap = max(maxi,overlap);
            }
        }    

       
        cout << a.size() + b.size() - overlap << endl;
    }
}
