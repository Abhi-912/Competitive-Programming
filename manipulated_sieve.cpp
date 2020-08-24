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
const int m=1000001;
int prime[m];
void sieve(int n){
    set<int> s;
    for(int i=2;i<=m;i++){
        if(prime[i]==0){
            for(int j=i;j<=m;j+=i) prime[j]=i;
        }
    }
    int c=0;
    while(n>1){
        int largest=prime[n];
        while(n%largest==0) c++,n=n/largest;

        s.insert(largest);
    }
    set<int>::iterator itr;
    for(itr=s.begin();itr!=s.end();itr++) cout<<*itr<<" ";
    cout<<endl;
}
int main(){
    clock_t start,end;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    start=clock();
SPEED;
int t;
cin>>t;
while(t--){
int n;
cin>>n;
sieve(n);
end=clock();
double time_taken 
		= double(end - start) 
		/ double(CLOCKS_PER_SEC); 

	// Print the Calculated execution time 
	cout << "Execution time: " << time_taken 
		<< " secs"; 
}
return 0;
}