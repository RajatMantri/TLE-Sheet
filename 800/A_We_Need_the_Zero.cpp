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
        vector<int> arr;
        
        int ans=0;
        
        for(int i=0;i<n;i++){
            int x;cin>>x;
            arr.push_back(x);
            ans=ans^x;
        }
        
        int a=0;
        for(int i=0;i<n;i++){
            a=a^(ans^arr[i]);
        }

        if(a!=0) ans=-1;

        cout<<ans<<endl;

    }
}