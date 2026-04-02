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
        vector<int> arr(n);
        int diff=INT_MAX;
        
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(i==0) continue;
            
            diff=min(diff,arr[i]-arr[i-1]);
        }
        int ans=0;
        if(diff>=0) ans=(diff+2)/2;
        cout<<ans<<endl;
    }
}