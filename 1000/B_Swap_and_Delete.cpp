#include<bits/stdc++.h>
using namespace std;
#define endi "\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
const ll mod = 1e9 + 7;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

//rbegin()
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int o=0,z=0;
        for(auto&i:s){
            if(i=='1') o++;
            else z++;
        }

        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                if(o>0){
                    o--;
                    count++;
                }
                else break;
            }
            else{
                if(z>0){
                    z--;
                    count++;
                }
                else break;
            }
        }

        cout<<s.length()-count<<endi;
    }
}