/* Linked List Node Structure
class Node {
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* arrayToList(vector<int>& arr) {
        int n = arr.size();
        
        Node* head = new Node(arr[0]);
        Node* tail = head;
        Node* curr = head;
        
        for(int i=1;i<n;i++){
            curr= new Node(arr[i]);
            tail->next = curr;
            tail = tail->next;
        }
        tail = head;
        return tail;
    }
};