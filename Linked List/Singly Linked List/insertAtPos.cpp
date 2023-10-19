
//! Insert at a Position of a Linked List

#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int data) {
        val = data;
        next = NULL;
    }
};

void insertAtHead(Node *&head, int val)
{
    Node *new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

//! Insert at Position
void insertAtPos(Node* &head, int val, int pos){
    if(pos == 0){
        insertAtHead(head, val);
        return;
    }
Node *new_node = new Node(val);
    Node *temp = head;

    int currPos = 0;
    while(currPos != pos-1){
        temp = temp->next;
        currPos++;
    } 

    //? Temp is pointing to pos-1

    new_node->next = temp->next;
    temp->next = new_node;
    
    
    } 

void insertAtTail(Node*& head, int val) {
    Node* new_node = new Node(val);

    if (head == NULL) {
        head = new_node;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void display(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;

    insertAtHead(head, 2);
    display(head);
    insertAtTail(head, 1);
    display(head);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 3);
    display(head);
    insertAtPos(head,9,3);
    display(head);

    return 0;
}
