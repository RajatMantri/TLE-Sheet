#include<bits/stdc++.h>
#define ll long long
#define mod (int)(1e9+7) 

using namespace std;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n==1){
            if(k==1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        } 
        else{
            if(n&1){
                if(n<k||k%2==0) cout<<"NO"<<endl;
                else cout<<"YES"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}