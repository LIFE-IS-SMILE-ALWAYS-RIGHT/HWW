 Node* insert(Node *head,int data)
{
    //Complete this method
    if(head==NULL){
        Node* tmp = new Node(data);
        return tmp ;
    }
    head->next = insert(head->next,data);
    return head;
}
