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

int searchll(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;
    while(curr!=NULL)
    {
        if(curr->data==x)
            return pos;
        else{
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}
