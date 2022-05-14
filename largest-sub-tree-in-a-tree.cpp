//  * Code by : hr-hackjack

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};

void printInorder(Node *node)
{
    if (node == NULL)
    {
        return;
    }
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
Node *buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size())
    {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N")
        {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N")
        {

            // Create the right child for the current node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++

/*
structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    // int h=0,f=0;
    // int height(Node* root)
    // {
    //   if(!root) return 0;
    //   int x=height(root->left);
    //   int y=height(root->right);
       
    //   if(x>=y) return x+1;
    //   else return y+1;
    // }
    
    // int solve(Node* root,int level)
    // {
    //     if(!root) return 0; 
    //     if(h==level && f==0)
    //     {
    //         f=1;
    //         return root->data;
    //     }
    //     else if(f==1)
    //     {
    //         return root->data;
    //     }
        
    //     int x = solve(root->left,level+1);
    //     int y = solve(root->right,level+1);
        
    //     return root->data+max(x,y);
        
    // }
    
    // vector<int> solve(Node* root)
    // {
    //     if(!root) return {0,0};
    //     vector<int> a =solve(root->left);
    //     vector<int> b=solve(root->right);
        
    //     if(a[0]<b[0]) return{b[0]+1,b[1]+root->data};
    //     if(a[0]>b[0]) return{a[0]+1,a[1]+root->data};
        
    //     else return{a[0]+1,max(a[1],b[1])+root->data};
    // }
    
    int sum=0;
    int solve(Node* root)
    {
        if(!root) return 0;
        if(!root->left && !root->right)
        {
            return root->data;
        }
        int x=solve(root->left);
        int y=solve(root->right);
        
        if((x+y+root->data)>sum)
        {
            sum=(x+y+root->data);
        }
        
        return x+y+root->data;
    }
    
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        // vector<int> v = solve(root);
        // return v[1];
        
         int x = solve(root);
         return x;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    scanf("%d", &t);
    cin.ignore();
    while (t--)
    {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        Solution obj;
        int res = obj.sumOfLongRootToLeafPath(root);
        cout << res << "\n";
    }
    return 0;
}  // } Driver Code Ends
