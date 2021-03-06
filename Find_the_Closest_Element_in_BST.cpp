/**
 * Title   : Find the Closest Element in BST
 * Code by : hr-hackjack
 * Link    : https://practice.geeksforgeeks.org/problems/find-the-closest-element-in-bst/1
 **/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


int minDiff(Node *root, int k);

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
   Node* root = new Node(stoi(ip[0]));

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
           currNode->left = new Node(stoi(currVal));

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
           currNode->right = new Node(stoi(currVal));

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
        string s;
       getline(cin, s);
       Node* root1 = buildTree(s);

       getline(cin, s);
       int k = stoi(s);
       // getline(cin, s);

       cout << minDiff(root1, k);
        cout << endl;
       //cout<<"~"<<endl;
   }
   return 0;
}
// } Driver Code Ends


/*The Node structure is

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// Return the minimum absolute difference between any tree node and the integer K

Node* getClosestElement(Node *root, int key) {

    if (!root)
        return NULL;

    if (root -> data == key)
        return root;

    Node *temp;

    if (key < root -> data) {

        if (!root -> left)
            return root;

        temp = getClosestElement(root -> left, key);

        if (abs(temp -> data - key) > abs(root -> data - key))
            return root;
        else
            return temp;
    }
    else {

        if (!root -> right)
            return root;

        temp = getClosestElement(root -> right, key);

        if (abs(temp -> data) - key > abs(root -> data - key))
            return root;
        else
            return temp;
    }

}

int minDiff(Node *root, int K)
{
    Node *res = getClosestElement(root, K);
    return (abs(res -> data - K));
}
