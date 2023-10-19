
//! Creating a Node in Linked List

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

int main()
{
    Node* n = new Node(3);
    cout<<n->val<<" "<<n->next;


}