#include<bits/stdc++.h>
using namespace std;

struct Node {
    Node *next;
    Node *prev;
    int data;
};

class mystack {
    public:
    Node *mid,*top;
    int count = 0;
    mystack(){
        mid = nullptr;
        top = nullptr;
    }
    void push(int n);
    int pop();
    int find_mid();
    void print();
    int size();
};

void mystack::push(int n) {

    Node *new_node = new Node;

    if(new_node == nullptr) cout << "Stack Overflow" << endl;
    else {
    new_node -> data = n;
    new_node -> prev = nullptr;
    new_node -> next = top;
    count+=1;

    if(count == 1) {
        mid = new_node;
    }
    else {
        top->prev = new_node;
        if(count & 1) {
            mid = mid -> prev;
        }
    }
    top = new_node;
    }
}

int mystack :: pop() {
    
    
    if(count == 0) cout << "Stack Underflow" << endl;

    Node *head = top;
    int item = head->data;
    top = head->next;

    if(top != nullptr) top->prev = nullptr; //if after removing linked list become empty;

    count -= 1;

    if(count%2==0) mid = mid -> next;

    delete(head);

    return item;
}

int mystack :: find_mid() {
    
    if(count == 0) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    else {
        return mid -> data;
    }
}

void mystack :: print() {
    Node *temp;
    temp = top;
    while(temp!= nullptr) {
     cout << temp->data << " ";
     temp = temp -> next;
    }
    cout << endl;
}

int mystack :: size() {
    return count;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    mystack st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int inp;
        cin >> inp;
        st.push(inp);
    }
    st.print();
    cout << st.size() << endl;
    cout << st.find_mid() << endl;
    return 0;
}
