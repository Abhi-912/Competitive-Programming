//KMP Search
void lpsarr(string phone,int n,int *lps){   //Creation of lps array
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<n){
        if(phone[i]==phone[len]){
         len++;
        lps[i]=len;
        i++;
        }
        else{
            if(len!=0) len=lps[len-1];
             else {
                 lps[i]=0;
                 i++;
             }
    }
}
//print(lps,n);
}

set<int> kmpsearch(string ai,string phone){    //Kmp Search function
  int m=ai.length();
  int n=phone.length();
  int lps[n];
  set<int> st;
  lpsarr(phone,n,lps);
    int i=0;
    int j=0;
    while(i<m){
    if(phone[j]==ai[i]){
        j++;
        i++;
    }
    if(j==n){
         st.insert((i-j));
        j=lps[j-1];
    }
    else if(i<m && phone[j]!=ai[i]){
        //cout<<j<<endl;
        if(j!=0) j=lps[j-1];                   //Take Care according to question.
                                               //Variable according to questio.
        else i=i+1; 
    }
    }
    //cout<<n<<endl;
return st;
}
int main(){                                     //Main function not required
string ai,phone;
cin>>ai>>phone;
set<int> st;
st=kmpsearch(ai,phone);
cout<<st.size()<<endl;
}
return 0;
}
