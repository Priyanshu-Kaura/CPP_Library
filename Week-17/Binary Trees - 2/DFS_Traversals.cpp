#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void Preorder(Node *root)
{
    if (root == NULL) // base case
        return;
    cout << root->val << " "; // Work
    Preorder(root->left);     // call 1
    Preorder(root->right);    // call 2
}

void Inorder(Node *root)
{
    if (root == NULL) // base case
        return;
    Inorder(root->left);      // call 1
    cout << root->val << " "; // Work
    Inorder(root->right);     // call 2
}

void Postorder(Node *root)
{
    if (root == NULL) // base case
        return;
    Postorder(root->left);    // call 1
    Postorder(root->right);   // call 2
    cout << root->val << " "; // Work
}

int main()
{
    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(5);
    Node *f = new Node(6);
    Node *g = new Node(7);

    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->left = f;
    c->right = g;
    Preorder(a);
    cout << endl;
    Inorder(a);
    cout << endl;
    Postorder(a);
}