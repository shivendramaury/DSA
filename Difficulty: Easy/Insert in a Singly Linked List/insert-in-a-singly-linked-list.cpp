/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        
        if(pos == 1){
            Node* first = new Node(val);
            first->next = head;
            return first;
        }
        int count=1;
        Node* temp=head;
        while(count<pos-1 && temp!=NULL){
            temp=temp->next;
            count++;
        }
        if(temp == NULL) return head;
        Node* tempo = new Node(val);
        tempo->next = temp->next;
        temp->next = tempo;
        
        return head;
    }
};