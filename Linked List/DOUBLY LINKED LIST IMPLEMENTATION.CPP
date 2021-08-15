struct Node
{
    int data;
    Node *prev;
    Node *prev;
    Node(int d)
    {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

Node* insertBegin(Node *head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    if(head!=NULL)
        head->prev = temp;
    return temp;
}

Node* insertEnd(Node *head, int data)
{
    Node *temp = new Node(data);
    if(head==NULL)
        return temp;
    Node *curr = head;
    while(curr->next!=NULL)
        curr = curr->next;
    curr->next = temp;
    temp->prev = curr;
    return head;
}

Node *deleteHead(Node *head)
{
    if(head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    else
    {
        Node *temp = head->next;
        temp->prev = NULL;
        delete head;
        return temp;
    }
}

Node *deleteLast(Node *head)
{
    if(head==NULL) return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    Node *curr = head;
    while(curr->next!=NULL)
        curr = curr->next;
    curr->prev->next = NULL;
    delete curr;
    return head;
}

Node* reverseList(Node *head)
{
    if(head==NULL || head->next==NULL) return head;
    Node *prev = head, *curr = head;
    while(curr!=NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}
