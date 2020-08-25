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
