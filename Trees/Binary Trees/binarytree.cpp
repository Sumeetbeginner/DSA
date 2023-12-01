
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *buildTree(Node *root)
{

    cout << "Enter the Data : ";
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter Data for Insertion in Left "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter Data for Insertion in Right "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}

int main()
{

    Node *root = NULL;

    root = buildTree(root);

    return 0;
}