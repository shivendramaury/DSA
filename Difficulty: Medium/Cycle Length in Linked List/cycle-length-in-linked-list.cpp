/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
            
            if(slow == fast){
                break;
            }
        }
        int count=1;
        
        if(fast == NULL || fast->next == NULL){
            return 0;
        }
        slow=fast->next;
        
        while(slow != fast){
            count++;
            slow=slow->next;
        }
        
        return count;
    }
};