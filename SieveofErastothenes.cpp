#include<bits/stdc++.h>
#define SPEED ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define ld long double
#define fi(i,j,n) for(int i=j;i<n;i++)
#define fd(i,j,n) for(int i=j;i>n;i--)
#define debug(n1) cout<<n1<<endl;
#define pb push_back
#define eb emplace_back
#define vi vector<int>
#define mod 1e9+7
using namespace std;
void sieveoferast(int n){
    bool prime[n+1];
    memset(prime,true,sizeof(prime));
    for(int p=2;p*p<=n;p++){
        if(prime[p]){
            for(int i=p*p;i<=n;i+=p) prime[i]=false;
        }
    }
    /*for(int i=2;i<=n;i++){
        if(prime[i]) cout<<prime[i]<<" ";
    }
    cout<<endl;*/
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
    #endif
SPEED;
int t;
cin>>t;
while(t--){
int n;
cin>>n;
sieveoferast(n);
}
return 0;
}