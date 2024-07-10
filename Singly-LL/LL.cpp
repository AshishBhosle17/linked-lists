// Convert an array to LL
/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */
 
Node* constructLL(vector<int>& arr) {
    // Write your code here
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1 ; i<arr.size() ; i++){
        Node*temp = new Node(arr[i]);
        mover-> next = temp;
        mover = temp;

    }
    return head;
}

// Length of LL 

/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

int length(Node *head)
{
	//Write your code here
    int cnt= 0;
    Node* temp = head;
    while (temp) {
        temp = temp ->next;
        cnt++;
    }
    return cnt;
}

// Search an element 

/****************************************************************

    Following is the class structure of the Node class:

    template <typename T>
    class Node
    {
    public:
        T data;
        Node<T> *next;
        Node()
        {
            this->data = 0;
            this->next = NULL;
        }
        Node(T data)
        {
            this->data = data;
            this->next = NULL;
        }
        Node(T data, T* next)
        {
            this->data = data;
            this->next = next;
        }
    };

*****************************************************************/

int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
    Node<int> *temp =head;
    while (temp) {
        if (temp -> data== k) return 1;
        temp = temp-> next;
    }
    return 0;
}