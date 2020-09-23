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
struct Node{
    int data;
    Node *next;
};

class Linked_list{
   private:
   Node *head,*tail;
   public:
   Linked_list(){
       head=nullptr;
       tail=nullptr;
   }
   void push(int n);
   int pop();
   void print(Node *p);
   void revrese(Node *p);
   Node* gethead(){
       return head;
   }
};
void Linked_list::push(int n){
    Node *temp=new Node;
    temp->data=n;
    temp->next=nullptr;
    if(head==nullptr){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=tail->next;
    }
    //delete temp;
}
int Linked_list::pop(){
    int k;
    if(head==nullptr) cout<<"Linked List is empty";
    if(head->next==nullptr){
        k=head->data;
        head=nullptr;
    }
    Node *p=head;
    while(p->next->next!=nullptr){
        p=p->next;
    }
    k=tail->data;
    tail=p;
    p->next=nullptr;

    return k;
}
void Linked_list::print(Node *p){
    while(p!=nullptr){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
SPEED;
Linked_list a,b;
int n;
cin>>n;
vi v;
int x,flag=0,smug=0,u,w=0;
fi(i,0,n) cin>>x,a.push(x);
   Node *p=a.gethead();
   while (p!=nullptr)
   {
       Node *q;
       if(p->data%2==0){
           v.pb(p->data);
        p=p->next;
       }
       else{
            if(v.size()>=1){
               while(v.size()!=0){
                 int temp;
                 temp=v.back();
                 b.push(temp);
                 v.pop_back();
               }
           }
           b.push(p->data);
           p=p->next;
       }
   }
   if(v.size()>=1){
      while(v.size()!=0){
                 int temp;
                 temp=v.back();
                 b.push(temp);
                 v.pop_back();
               } 
   }
   b.print(b.gethead());
return 0;
}
