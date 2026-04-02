#include<bits/stdc++.h>
#define ll long long
#define mod (int)(1e9+7) 

using namespace std;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        
        if(x%k!=0){
            cout<<1<<endl;
            cout<<x;
        }
        else if((x-1)%k!=0){
            cout<<2<<endl;
            cout<<x-1<<" "<<1;
        }
        cout<<endl;
    }
}