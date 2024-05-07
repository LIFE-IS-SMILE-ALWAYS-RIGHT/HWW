// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 typedef class SinglyLinkedListNode* node;
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    node tmp = new SinglyLinkedListNode(data);
    if(llist == NULL)
    {
        llist = tmp;
    }
    else {
        tmp->next = llist;
        llist = tmp;
    }
    return llist;

}
