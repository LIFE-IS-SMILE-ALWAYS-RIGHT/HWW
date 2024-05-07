typedef class SinglyLinkedListNode* node;
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
// cach 1 : loop
    node tmp = head;
    node newnode = new SinglyLinkedListNode(data);
    if(head == NULL)
    {
        head = newnode;
    }
    else 
    {
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = newnode;
    }
    return head;

// cach 2 : recursion
    if(head == NULL) return new SinglyLinkedListNode(data);
    else
     {
         head->next = insertNodeAtTail(head->next,data);
         
         return head;
     };
}
