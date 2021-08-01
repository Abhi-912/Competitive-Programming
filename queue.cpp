struct Node{
    int data;
    Node *next;
};
class mqueue{
    public:
    Node *front,*rear;
    mqueue(){front=rear=nullptr;}
    void push(int n);
    void pop();
    void display();
};
void mqueue::push(int n){
    Node *temp=new Node;
    if(temp==nullptr) {cout<<"OVERFLOW"<<endl;return ;}
    temp->data=n;
    temp->next=nullptr;
    if(front==nullptr) front=rear=temp;
    else{
        rear->next=temp;
        rear=temp;
    }
}
void mqueue::pop(){
    if(front==nullptr) {cout<<"QUEUE IS EMPTY"<<endl;return;}
    else{
        if(front=rear) front=rear=nullptr;
        else{
            front=front->next;
        } 
    }
}

void mqueue::display(){
    if(front==nullptr) {cout<<"EMPTY"<<endl;return;}
        Node *temp=front;
        while(temp){
            cout<<temp->data;
            temp=temp->next;
    }
    cout<<endl;
}
