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
        string s;
        cin>>n>>s;
        int i=0,j=n-1;
        while(i<=j){
            if(s[i]=='1'&&s[j]=='0'||s[i]=='0'&&s[j]=='1'){
                i++;j--;
            }
            else break;
        }
        cout<<j-i+1<<endl;
    }
}