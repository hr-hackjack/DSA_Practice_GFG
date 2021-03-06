/**
 * Title   : Root to Leaf Paths
 * Code by : hr-hackjack
 * Link    : https://practice.geeksforgeeks.org/problems/root-to-leaf-paths/1
 **/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


void printPaths(Node *root);

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}



int main() {
    int t;
    string tc;
    getline(cin, tc);
    t=stoi(tc);
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);

        printPaths(root);
    }
    return 0;
}


// } Driver Code Ends


/* Structure of Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};*/

// 1 2 #1 3 #
// 10 20 40 #10 20 60 #10 30 #

/* The function should print all the paths from root
 to leaf nodes of the binary tree */

void findPaths(Node *root, vector<int> path, int pathLen) {
    if (!root)
        return;

    path.emplace_back(root -> data);
    ++pathLen;

    if (root -> left == NULL && root -> right == NULL) {
        for (int i = 0; i < pathLen; ++i)
            cout << path[i] << ' ';
        cout << '#';
    }
    else {
        findPaths(root -> left, path, pathLen);
        findPaths(root -> right, path, pathLen);
    }
}

void printPaths(Node* root)
{
    vector<int> path;
    findPaths(root, path, 0);
    cout << '\n';
}
