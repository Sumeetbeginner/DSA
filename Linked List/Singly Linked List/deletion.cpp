

//! Insert at a Position of a Linked List

#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
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

void insertAtPos(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        insertAtHead(head, val);
        return;
    }
    Node *new_node = new Node(val);
    Node *temp = head;

    int currPos = 0;
    while (currPos != pos - 1)
    {
        temp = temp->next;
        currPos++;
    }

    //? Temp is pointing to pos-1

    new_node->next = temp->next;
    temp->next = new_node;
}

void insertAtTail(Node *&head, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

//! Deletion at Head

void deleteAtHead(Node *&head)
{
    Node *temp = head;
    head = head->next;
    free(temp);
}

//! Deletion at Tail

void deleteAtEnd(Node *&head)
{

    Node *second_last = head;
    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }

    Node *temp = second_last->next;

    second_last->next = NULL;
    free(temp);
}

//! Delete at Arbitrary Position
void deleteAtPos(Node *&head, int pos)
{

    if (pos == 0)
    {
        deleteAtHead(head);
        return;
    }

    int curr = 0;

    Node *prev = head;
    while (curr != pos - 1)
    {
        prev = prev->next;
        curr++;
    }

    Node *temp = prev->next;

    prev->next = prev->next->next;

    free(temp);
}

void display(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;

    insertAtHead(head, 2);
    display(head);
    insertAtTail(head, 1);
    display(head);
    insertAtTail(head, 4);
    display(head);
    insertAtHead(head, 3);
    display(head);
    insertAtPos(head, 9, 3);
    display(head);

    deleteAtPos(head, 2);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtEnd(head);
    display(head);

    return 0;
}
