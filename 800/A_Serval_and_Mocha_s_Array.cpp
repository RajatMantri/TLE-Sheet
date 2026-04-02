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
        for(int i=0;i<n;i++) cin>>arr[i];

        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a=__gcd(arr[i],arr[j]);
                mini=min(mini,a);
                if(mini<=2) break;
            }
        }

        if(mini>2) cout<<"No";
        else cout<<"Yes";
        cout<<endl;
    }
}