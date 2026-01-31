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
    queue<Node*> qu;
    qu.push(root);
    while (!qu.empty())
    {
        Node* node = qu.front();
        qu.pop();

        cout << node->data << " ";

        if (node->left)
            qu.push(node->left);
        if (node->right)
            qu.push(node->right);
    }
    return 0;
}
