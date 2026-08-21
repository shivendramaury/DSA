/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node* tail = head;
        Node* newVal = new Node(x);
        if(head == NULL){
            return newVal;
        }
        
        while(tail->next != nullptr){
            tail = tail->next;
        }
        
        
        tail->next = newVal;
        return head;
    }
};