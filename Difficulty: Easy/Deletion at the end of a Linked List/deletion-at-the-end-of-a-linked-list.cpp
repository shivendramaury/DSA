/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        Node* tail = head;
        
        if(head->next == NULL){
            return NULL;
        }
        
        if(head->next->next == NULL){
            head->next = NULL;
            return head;
        }
        
        while(tail->next->next != NULL){
            tail = tail->next;
        }
        tail->next = NULL;
        return head;
    }
};