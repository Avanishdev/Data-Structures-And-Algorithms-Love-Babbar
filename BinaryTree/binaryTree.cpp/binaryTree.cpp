#include <iostream>
#include <queue>
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
class TreeInfo
{
public:
    int height;
    int diameter;
    TreeInfo(int h, int d)
    {
        this->diameter = d;
        this->height = h;
    }
};
class BinaryTree
{
public:
    int indx = -1;
    Node *buildBinaryTree(int preorder[])
    {
        indx++; // root node 0
        if (preorder[indx] == -1)
        {
            return NULL;
        }
        // processing
        // creating new node
        Node *newNode = new Node(preorder[indx]);
        // cout << newNode->data << endl;
        // left
        newNode->left = buildBinaryTree(preorder); // recursive call
        // right
        newNode->right = buildBinaryTree(preorder); // recursive call
        // return root node
        return newNode;
    }
};
void preorder(Node *&root)
{
    // base case
    if (root == NULL)
    {
        return;
    }
    // processing
    cout << root->data << " ";
    // recursive call
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    // left
    inorder(root->left);
    // root
    cout << root->data << " ";
    // right
    inorder(root->right);
}
int countNodes(Node *&root)
{
    if (root == NULL)
    {
        return 0;
    }
    // left
    int countL = countNodes(root->left);
    // right
    int countR = countNodes(root->right);
    // root
    return countL + countR + 1;
}
int sumNodes(Node *&root)
{
    if (root == NULL)
    {
        return 0;
    }
    // left
    int sumL = sumNodes(root->left);
    // right
    int sumR = sumNodes(root->right);
    // root
    return sumL + sumR + root->data;
}
int heightofTree(Node *&root)
{
    if (root == NULL)
    {
        return 0;
    }
    // left
    int heightL = heightofTree(root->left);
    // right
    int heightR = heightofTree(root->right);
    int height = max(heightL, heightR);
    // root
    return height + 1;
}
int diameter(Node *&root)
{
    if (root == NULL)
    {
        return 0;
    }
    int diam1 = diameter(root->left);
    int diam2 = diameter(root->right);
    int diam3 = heightofTree(root->left) + heightofTree(root->right) + 1;
    return max(diam3, max(diam1, diam2));
}
TreeInfo *diameterofTree(Node *&root)
{
    if (root == NULL)
    {
        return new TreeInfo(0, 0);
    }
    // left ki info
    TreeInfo *Left = diameterofTree(root->left);
    // right ki info
    TreeInfo *Right = diameterofTree(root->right);
    // height
    int myHeight = max(Left->height, Right->height) + 1;

    int diam1 = Left->diameter;
    int diam2 = Right->diameter;
    int diam3 = heightofTree(root->left) + heightofTree(root->right) + 1;
    int myDiameter = max(diam3, max(diam1, diam2));

    TreeInfo *myInfo = new TreeInfo(myHeight, myDiameter);

    return myInfo;
}
void postorder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    // L
    postorder(root->left);
    // R
    postorder(root->right);
    // C
    cout << root->data << " ";
}
void levelOrder(Node *&root)
{
    if (root == NULL)
    {
        return;
    }
    queue<int> q;
    // push root node
    q.push(root->data);
    q.push(NULL);
    while (!q.empty())
    {
        Node *currNode = new Node(q.front());
        q.pop();
        if (currNode == NULL)
        {
            cout << endl;
            if (q.empty())
            {
                break;
            }
            else
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << currNode->data << " ";
            if (currNode->left->data != NULL)
            {
                q.push(currNode->left->data);
            }
            if (currNode->right->data != NULL)
            {
                q.push(currNode->right->data);
            }
        }
    }
}

int main()
{
    int nodes[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, 6, -1, -1, 7, -1, -1};
    BinaryTree *bT = new BinaryTree();
    Node *root = bT->buildBinaryTree(nodes);
    // preorder(root);
    // cout << endl;
    // inorder(root);
    // cout << endl;
    // postorder(root);
    // cout << endl;
    // levelOrder(root);
    // this function returns TreeInfo which contains height & diameter
    cout << diameterofTree(root)->diameter << endl;
    return 0;
}