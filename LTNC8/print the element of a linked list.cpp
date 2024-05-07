// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    
// cach 1: loop
     while(head != NULL)
     {
        cout << head->data << endl;
        head = head->next;
     }
    
// cach 2: recursion
    if(head == NULL) return;
    cout << head->data << endl;
    printLinkedList(head->next);
}
