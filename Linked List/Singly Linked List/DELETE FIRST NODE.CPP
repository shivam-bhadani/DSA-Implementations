struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node* deleteHead(Node *head)
{
    if(head==NULL) return NULL;
    else
    {
        Node *temp = head->next;
        delete head;
        return temp;
    }
}
