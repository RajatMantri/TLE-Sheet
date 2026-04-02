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
        int n;cin>>n;
        string s;cin>>s;
        vector<int> freq(26);

        for(int i=0;i<n;i++){
            freq[s[i]-'a']++;
        }

        for(int i=0;i<n;i++){
            freq[s[i]-'a']--;
            for(int a=0;a<s[i]-'a';a++){
                if(freq[a]>0){
                    int j;
                    for(j=i+1;j<n;j++) if(s[j]-'a'==a) break;
                    cout<<"YES"<<endi<<++i<<" "<<++j<<endi;
                    return 0;
                }
            }
        } 

        cout<<"NO"<<endi;
}