/**
 * Title   : Max and min element in Binary Tree
 * Code by : hr-hackjack
 * Link    : https://practice.geeksforgeeks.org/problems/max-and-min-element-in-binary-tree/1
 **/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// A tree node
struct node
{
	int data;
	struct node *left;
	struct node *right;

	node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};

// Returns maximum value in a given Binary Tree
int findMax(struct node* root);
// Returns minimum value in a given Binary Tree
int findMin(struct node* root);

void insert(struct node *root,int n1,int n2,char lr)
 {
     if(root==NULL)
        return;
     if(root->data==n1)
     {
         switch(lr)
         {
          case 'L': root->left=new node(n2);
                    break;
          case 'R': root->right=new node(n2);
                    break;
         }
     }
     else
     {
         insert(root->left,n1,n2,lr);
         insert(root->right,n1,n2,lr);
     }
 }
// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    struct node *root=NULL;
    while(n--)
    {
        char lr;
        int n1,n2;
        cin>>n1>>n2;
        cin>>lr;
        if(root==NULL)
        {
            root=new node(n1);
            switch(lr){
                    case 'L': root->left=new node(n2);
                    break;
                    case 'R': root->right=new node(n2);
                    break;
                    }
        }
        else
        {
            insert(root,n1,n2,lr);
        }
    }

    cout<<findMax(root)<<" "<<findMin(root)<<endl;
    }
    return 0;
}
// } Driver Code Ends


// Returns maximum value in a given Binary Tree
int findMax(struct node* root) {

    if (root == NULL)
        return INT_MIN;

    int currMax = root -> data;
    int leftMax = findMax(root -> left);
    int rightMax = findMax(root -> right);

    if (leftMax > currMax)
        currMax = leftMax;
    if (rightMax > currMax)
        currMax = rightMax;

    return currMax;

}

// Returns minimum value in a given Binary Tree
int findMin(struct node* root) {

    if (root == NULL)
        return INT_MAX;

    int currMin = root -> data;
    int leftMin = findMin(root -> left);
    int rightMin = findMin(root -> right);

    if (leftMin < currMin)
        currMin = leftMin;
    if (rightMin < currMin)
        currMin = rightMin;

    return currMin;

}
