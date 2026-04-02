#include<bits/stdc++.h>
#define ll long long
using namespace std;
const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> box(n);
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>box[i];
            if(i==0){
                maxi=box[i];
            }
            else{
                maxi=max(maxi,box[i]-box[i-1]);
            }
        }
        maxi=max(2*(k-box[n-1]),maxi);
        cout<<maxi;
        cout<<endl;
    }
}