#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
void inorder(Node* root, vector<int>& ans)
{
    if (root == NULL)
        return;

    inorder(root->left, ans);   // Left
    ans.push_back(root->data);  // Root
    inorder(root->right, ans);  // Right
}
int main(){
    int n;
    cin>>n;
    if(n==0){
        return 0;
    }
    string val;
    cin>>val;
    if(val=="NULL"){
        return 0;
    }
    Node *root=new Node(stoi(val));
    queue<Node *>q;
    q.push(root);
    int cnt=1;
    while(cnt<n && !q.empty()){
        Node *temp=q.front();
        q.pop();
        // Left child
        cin>>val;
        if(val!="NULL"){
            Node *leftnode=new Node(stoi(val));
            temp->left=leftnode;
            q.push(leftnode);
        }
        cnt++;
        if(cnt>=n) break;
        // Right child
        cin>>val;
        if(val!="NULL"){
            Node *rightnode=new Node(stoi(val));
            temp->right=rightnode;
            q.push(rightnode);
        }
        cnt++;
    }
    vector<int> ans;
    inorder(root, ans);
    
    for (int i = 0; i<(int)ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}
