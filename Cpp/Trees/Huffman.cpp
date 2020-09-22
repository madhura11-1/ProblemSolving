// Huffman coding algi is used for data compresssion
// uses priority queue

//Complexity : O(nlogn)
// logn to form a min heap each time
// n as there are n such nodes so for each we will have to form a min heap

#include <bits/stdc++.h>
using namespace std;

struct Node{
    char val;
    int fre;
    Node *left,*right;

    Node(char val1,int fre1){
        left=right=NULL;
        val = val1;
        fre = fre1;
    }
};

struct compare{

    bool operator()(Node *l,Node *r){
        return (l->fre > r->fre);
    }
};

void print(Node *root,string fre){

if(root == NULL){
    return;
}

    if(root->val != '#'){
        cout<<root->val<<" "<<fre<<endl;
    }
    print(root->left,fre+ "0");
    print(root->right,fre+ "1");
 

}

void Huffman(char *arr,int *fre){
    int n=4;

    priority_queue<Node*, vector<Node*>,compare> que;

    for(int i=0;i<n;i++){
        que.push(new Node(arr[i],fre[i]));
    }

    while(que.size() != 1){

        Node *left = que.top();
        que.pop();
        cout<<"Left "<<left->val<<" "<<left->fre<<endl;
        Node *right = que.top();
        que.pop();
        cout<<"Right "<<right->val<<" "<<right->fre<<endl;

        Node *parent = new Node('#',left->fre + right->fre);
        parent->left = left;
        parent->right = right;
        que.push(parent);

    }


    //print
    print(que.top(),"");

}


int main(){
    //input array of struct Node having value and frequency.
    char arr[4] = {'A' , 'B', 'C', 'D'};
    int fre[4] = {3,2,1,4};
    Huffman(arr,fre);

    return 0;
}