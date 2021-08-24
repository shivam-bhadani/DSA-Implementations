struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

// Inorder Traversal

void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Preorder Traversal

void preorder(Node *root)
{
    if(root!=NULL)
    {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

// Postorder Traversal

void postorder(Node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

// Level order traversal without adding new line

void printLevel(Node *root)
{
    if(root==NULL) return;

    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}

// Level order traversal line by line

void printLevelOrderline(Node *root)
{
    if(root==NULL) return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1)
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->data << " ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
        if(q.front()==NULL)
        {
            cout << "\n";
            q.pop();
            q.push(NULL);
        }
    }
}

// Level order traversal line by line using two loops

void printLevelOrderline(Node *root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int count = q.size();
        for(int i=0; i<count; i++)
        {
            Node *curr = q.front();
            q.pop();
            cout << curr->data << " ";
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        cout << "\n";
    }
}
