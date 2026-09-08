/* Structure of Doubly Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertAtPos(Node* head, int p, int x) {
        Node* temp = head;
        
        int count = p;
        
        if(head == NULL){
            return NULL;
        }
        
        while(count > 0 && temp != NULL){
            temp = temp->next;
            count--;
        }
        
        Node* newNode = new Node(x);
        Node* nexto = temp->next;
        
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = nexto;
        
        if(nexto != NULL){
            nexto->prev = newNode;
        }
        
        return head;
    }
};