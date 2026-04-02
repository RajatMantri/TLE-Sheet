#include<bits/stdc++.h>
#define ll long long
#define mod (int)(1e9+7) 

using namespace std;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int div=9;
        int ans=0;
        while(n/div){
            ans+=9;
            div*=10;
        }

        div/=9;
        for(int i=div;i<=div*9;i+=div){
            if(n>=i) ans++;
            else break;
        }
        cout<<ans<<endl;
    }
}