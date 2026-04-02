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
        vector<int> a(n);
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(1==a[0]) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}