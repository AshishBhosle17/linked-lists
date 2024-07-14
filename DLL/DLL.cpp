#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1) {
        data= data1;
        next =next1;
        back = back1;
    }

    public:
    Node (int data) {
        data= data1;
        next= nullptr;
        back= nullptr;
    }
};
Node* convertArr2DLL(vector <int> &arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i= 1; i<arr.size(); i++) {
        Node* temp =new Node(arr[i], nullptr, prev);
        prev ->next =temp;
        prev = temp;
    }
    return head;
}
void print (Node* head) {
    while (head != NULL) {
        cout << head -> data << " ";
        head = head ->next;
    }
}


// Delete Head of a Doubly Linked List

Node * deleteHead(Node *head) {
    // Write your code here.
    if (head== NULL || head->next== NULL){
        return NULL;
    }
    Node* prev = head;
    head= head->next;

    head->prev = nullptr;
    prev->next = nullptr;

    delete prev;
    return head;
}

// Delete Tail of a Doubly Linked List

Node* deleteTail(Node *head) {
    if (head== NULL || head->next== NULL) {
        return NULL;
    }
    Node* tail= head;
    while (tail-> next != NULL) {
        tail= tail-> next;
    }
    Node* newTail =tail->back;
    newTail-> next= nullptr;
    tail->back= nullptr;
    delete tail;
    return head;
    
}

int main() {
    vector<int> arr ={12, 5, 8, 7}; //output: 12 5 8
    Node* head = convertArr2DLL(arr);
    
    print (head);
    return 0;
}