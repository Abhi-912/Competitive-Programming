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
   void pop();
   void print(Node *p);
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
void Linked_list::pop(){
    if(head==nullptr) cout<<"Linked List is empty";
    if(head->next==nullptr){
        head=nullptr;
    }
    Node *p=head;
    while(p->next->next!=nullptr){
        p=p->next;
    }
    tail=p;
    p->next=nullptr;
}
void Linked_list::print(Node *p){
    while(p!=nullptr){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
Linked_list a;
a.push(10);
a.push(2);
a.push(12);
a.push(14);
a.print(a.gethead());
a.pop();
a.print(a.gethead());
return 0;
}
