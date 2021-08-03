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
