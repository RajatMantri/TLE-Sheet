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
        int fl=true;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            if(x&1) fl=!fl;
        }

        if(fl) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}