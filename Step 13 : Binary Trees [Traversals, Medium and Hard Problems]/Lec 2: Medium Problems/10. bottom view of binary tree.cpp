class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int>ans;
    if(root == NULL) return ans;

    map <int, map<int,vector<int>>> nodes;

    // to fulfill this "If two nodes have the same position, then the value of the node that is added first will be the value that is on the left side."
    // we will use level order traversal

    queue< pair< Node*, pair<int,int>>> q;

    q.push({root,{0,0}});

    while(!q.empty()){
        pair< Node*, pair<int,int>> temp = q.front();
        q.pop();
        Node* frontNode = temp.first;
        int hd = temp.second.first; // hd = horizontal distance
        int lvl = temp.second.second; // lvl = level of node 

        if(frontNode!= NULL){
            nodes[hd][lvl].push_back(frontNode->data);
        }

        if(frontNode->left)
        q.push({frontNode ->left,{hd-1,lvl+1}});
        if(frontNode->right)
        q.push({frontNode ->right,{hd+1,lvl+1}});
    }

    for(auto i:nodes){ // <int,map<>>
        vector<int>temp;
        for(auto j : i.second){ // <int, vector<>>
             
            temp = j.second;
        }
        ans.push_back(temp[temp.size()-1]);
    }
    }
};
