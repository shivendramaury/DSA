/* class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int d) {
        data = d;
        next = nullptr;
        prev = nullptr;
    }
}; */

class Solution {
  public:
    Node* createDLL(vector<int>& arr) {
        Node* head = new Node(arr[0]);
        Node* prev = NULL;
        Node* curr = head;
        Node* next = head->next;
        
        if(head == NULL){
            return NULL;
        }
        
        int n = arr.size();
        
        for(int i=1;i<n;i++){
            Node* newNode = new Node(arr[i]);
            curr->next = newNode;
            newNode->prev = curr;
            curr=curr->next;
        }
        return head;
    }
};