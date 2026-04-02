#include<bits/stdc++.h>
#define ll long long
#define mod (int)(1e9+7) 

using namespace std;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(n-a-b>=2) cout<<"Yes";
        else{
            //coinciding
            //1 mid
            if(n==a&&n==b) cout<<"Yes";
            else cout<<"No";

        }
        cout<<endl;
    }
}