/*Ceil in BST
Difficulty: MediumAccuracy: 62.73%Submissions: 72K+Points: 4
Given a BST and a number X, find Ceil of X.
Note: Ceil(X) is a number that is either equal to X or is immediately greater than X.

If Ceil could not be found, return -1.

Example 1:

Input:
      5
    /   \
   1     7
    \
     2 
      \
       3
X = 3
Output: 3
Explanation: We find 3 in BST, so ceil
of 3 is 3.
Example 2:

Input:
     10
    /  \
   5    11
  / \ 
 4   7
      \
       8
X = 6
Output: 7
Explanation: We find 7 in BST, so ceil
of 6 is 7.
Your task:
You don't need to read input or print anything. Just complete the function findCeil() to implement ceil in BST which returns the ceil of X in the given BST.

Expected Time Complexity: O(Height of the BST)
Expected Auxiliary Space: O(Height of the BST).

Constraints:
1 <= Number of nodes <= 105
1 <= Value of nodes<= 105*/

int solve (Node* root, int x, int curr_max){
    
    
   
    if(root->data == x) return x;
    
    if(root->data > x){
        
        if(root->data < curr_max)
        curr_max = root->data;
        
        if(root->left)
        return solve(root->left,x,curr_max);
       
        return curr_max;
    }
    
    if(root -> data < x){
        
        if(root->right)
        return solve(root->right,x,curr_max);
       
        return curr_max;
    }
    
    
    
    if(root->left == NULL && root->right == NULL) return curr_max;
}


int findCeil(Node* root, int input) {
    if (root == NULL) return -1;
    int temp = INT_MAX;
    
    if(input <= root->data)
    temp = root->data;
    
    int ans= solve(root,input,temp);
    if(ans == INT_MAX)
    return -1;
    else return ans;
}
