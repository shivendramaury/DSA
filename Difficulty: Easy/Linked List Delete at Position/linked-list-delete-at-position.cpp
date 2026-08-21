/* Structure of Linked List Node
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
    Node* deleteNode(Node* head, int x) {
        int count =1;
        
        if(head->next == NULL){
            return NULL;
        }
        
        if(x == 1){
            Node* tempo = head;
            head = head->next;
            delete tempo;
            return head;
        }
        Node* temp = head;
        while(count!= x-1){
            temp = temp->next;
            count++;
        }
        temp->next = temp->next->next;
        
        return head;
    }
};