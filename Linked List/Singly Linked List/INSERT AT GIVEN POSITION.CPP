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

Node* insertPos(Node *head, int pos, int data)
{
    Node *temp = new Node(data);
    if(pos==1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    for(int i=1; curr!=NULL && i<=pos-2; i++)
        curr = curr->next;

    if(curr==NULL) return head;

    temp->next = curr->next;
    curr->next = temp;
    return head;
}
