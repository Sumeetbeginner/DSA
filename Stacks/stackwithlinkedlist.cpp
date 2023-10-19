
#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

class Stack
{
    Node *head ;
    int capacity;
    int currSize;

public:
    Stack(int c)
    {
        this->capacity = c;
        this->currSize = 0;
        head = NULL;
    }

    bool isEmpty()
    {

        return this->head == NULL;
    }

    bool isFull()
    {

        return this->currSize == this->capacity;
    }

    void push(int data)
    {

        Node *new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;

        this->currSize++;
    }

    int pop()
    {

        if (this->head == NULL)
        {
            cout << "UnderFlow" << endl;
            return INT_MIN;
        }

        Node *new_head = this->head->next;
        this->head->next = NULL;
        Node *toBeRemoved = this->head;

        int result = toBeRemoved->data;
        delete toBeRemoved;

        this->head = new_head;
        return result;
    }

    int getTop()
    {
        if (this->head == NULL)
        {
            cout << "UnderFlow";
            return INT_MIN;
        }

        return this->head->data;
    }

    int size()
    {
        return this->currSize;
    }
};

int main(){
    Stack st(3);

    cout<<st.isEmpty()<<endl;

    st.push(6);
    st.push(8);
    st.push(0);

    cout<<st.getTop()<<endl;
    
    st.pop();
    st.push(7);

    cout<<st.getTop()<<endl;

    st.push(5);

    cout<<st.getTop()<<endl;
    cout<<st.isEmpty()<<endl;

    return 0;
}