#include<bits/stdc++.h>
#define Abhi_921 ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define fi(i,j,n) for(int i=j;i<n;i++)
#define fd(i,j,n) for(int i=j;i>n;i--)
#define printe(v) for(auto &i:v){cout<<i<<' ';}cout<<endl;
#define print(n1) cout<<n1<<endl;
#define all(x) (x).begin(),(x).end()
#define pb push_back
using namespace std;
const int mod=1e9+7;
const int lim = 100010;
struct Node {
    Node *next;
    int data;
};
class stack {
    public:
    Node *top;
    stack(){top = nullptr;}
    void push(int n);
    void pop();
    int peek();
    int size();
};

void stack :: push(int n) {
    Node *newnode = new Node;
    if(newnode == nullptr) {print("Stack Overflow");}
    else {
        newnode->data = n;
        newnode->next = top;
        top = newnode;
    }
}

void stack :: pop() {
    if(top == nullptr) cout << "Stack is empty" << endl;
    else {
        top = top->next;
    }
}

int stack::peek() {
    return top->data;
}

int stack::size() {
    Node *temp;
    int cnt = 0;
    temp = top;
    while(temp!=nullptr) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    Abhi_921;
    int t;
    cin >> t;
    while (t--)
    {
       int n;
       cin >> n;
       int a[n] = {};
       stack st;
       fi(i, 0, n) cin >> a[i];
       int ans[n] = {};
       fi(i, 0, n) 
       {
           if(st.size()==0) 
           {
               st.push(i);
           }
           else if(a[st.peek()] <= a[i]) 
           {
               st.push(i);
           }
           else 
           {
           while(st.size() != 0 && a[st.peek()] > a[i]) 
           {
               ans[st.peek()] = a[i];
               st.pop();
           }
           st.push(i);
           }
       }
       if(st.size()) 
       {
           ans[st.peek()] = -1;
           st.pop();
       }
       fi(i, 0, n) cout << ans[i] << " ";cout << endl;

    }
    return 0;
}
