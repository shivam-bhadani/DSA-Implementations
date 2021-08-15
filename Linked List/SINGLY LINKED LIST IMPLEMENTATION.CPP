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

Node* insertBegin(Node *head, int x)
{
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

Node* insertEnd(Node *head, int x)
{
    Node *temp = new Node(x);
    if(head==NULL) return temp;

    Node *curr = head;

    while(curr->next!=NULL)
        curr = curr->next;

    curr->next = temp;
    return head;
}

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

ListNode* reverseList(Node *head)
{
    if(head==NULL) return NULL;
    Node *prev = NULL;
    Node *curr = head;
    while(curr!=NULL){
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}
