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

void printList(Node *head)
{
    Node *curr = head;

    while(curr!=NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}
