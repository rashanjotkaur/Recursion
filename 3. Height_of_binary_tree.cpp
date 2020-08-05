int height(struct Node *root){
    if(root==NULL)
        return 0;
    
    int l=height(root->left);
    int r=height(root->right);
    return 1+max(l,r);
}
