#include<bits/stdc++.h>
using namespace std;
#define endi "\n"
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
const ll mod = 1e9 + 7;

const static auto initialize = [] { std::ios::sync_with_stdio(false); std::cin.tie(nullptr); std::cout.tie(nullptr); return nullptr; }();

const int N=1e6+10;
vector<bool> isPrime(N,1);

bool sieve(){
    isPrime[1]=isPrime[0]=0;
    for(int j=2;j<N;j++){
        if(isPrime[j]){
            for(int i=2*j;i<N;i+=j) isPrime[i]=0;
        }
    }
}

//rbegin()
int main(){
    int t;
    cin>>t;

    sieve();
    vector<int> primes;
    for(int i=2;i<N;i++) if(isPrime[i]) primes.push_back(i);

    while(t--){
        int d;
        cin>>d;

        int l=0,r=primes.size()-1;
        int first=0,second=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(primes[mid]>=d+1){
                first=primes[mid];
                r=mid-1;
            }
            else l=mid+1;
        }
        
        l=0,r=primes.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(primes[mid]>=d+first){
                second=primes[mid];
                r=mid-1;
            }
            else l=mid+1;
        }

        cout<<first*second<<endi;;
    }
}