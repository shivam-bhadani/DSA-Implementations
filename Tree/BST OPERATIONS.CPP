struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = right = NULL;
    }
};

// check if key is present in BST Recursively

bool isPresent(Node *root, int x)
{
    if(root==NULL)
        return false;
    if(x==root->key)
        return true;
    else if(x<root->key)
        return isPresent(root->left, x);
    else
        return isPresent(root->right, x);
}


// Check if key is present in BST iteratively

bool isPresent(Node *root, int x)
{
    while(root)
    {
        if(root->key == x)
            return true;
        else if(root->key>x)
            root = root->left;
        else
            root = root->right;
    }
    return false;
}

// Recursive search

Node* search(Node *root,int x)
{
    if(root==NULL || root->key==x) return root;
    else if(x<root->key) return search(root->left, x);
    else return search(root->right, x);
}

// Delete operation

Node* deleteNode(Node *root, int x)
{
    if(root==NULL) return root;
    if(x<root->key)
        root->left = deleteNode(root->left, x);
    else if(x>root->key)
        root->right = deleteNode(root->right, x);
    else {
        if(root->left==NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *succ = getSuccessor(root);
            root->key = succ->key;
            root->right = deleteNode(root->right, succ->key);
        }
        return root;
    }
}
Node* getSuccessor(Node *curr)
{
    curr = curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr = curr->left;
    return curr;
}
