#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
               cin>>arr[i][j];
            }
        }
        int ans=0;
        int rs=0,re=9,cs=0,ce=9;
        int pt=1;
        while(rs<=re&&cs<=ce){
            for(int j=cs;j<=ce;j++) if(arr[rs][j]=='X') ans+=pt;
            rs++;
            for(int i=rs;i<=re;i++) if(arr[i][ce]=='X') ans+=pt;
            ce--;
            for(int j=ce;j>=cs;j--) if(arr[re][j]=='X') ans+=pt;
            re--;
            for(int i=re;i>=rs;i--) if(arr[i][cs]=='X') ans+=pt;
            cs++;
            pt++;
        }
        cout<<ans<<endl;
    }
    return 0;
}