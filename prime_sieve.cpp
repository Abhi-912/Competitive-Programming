
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
