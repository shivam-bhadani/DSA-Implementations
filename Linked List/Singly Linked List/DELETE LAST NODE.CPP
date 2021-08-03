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

Node* deleteLast(Node *head)
{
    Node *curr = head;

    if(curr==NULL) return NULL;
    if(curr->next==NULL)
    {
        delete curr->next;
        curr->next = NULL;
        return head;
    }

    while(curr->next->next!=NULL)
        curr = curr->next;

    delete (curr->next);
    curr->next = NULL;
    return head;
}
