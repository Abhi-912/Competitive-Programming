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
};

void stack :: push(int n) {
    Node *newnode = new Node;
    if(newnode == nullptr) cout << "Stack Overflow" << endl;
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
