/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev = NULL;

        while(head != NULL){
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        return prev;
    }
    ListNode* removeNodes(ListNode* head) {
        head = reverse(head);
        ListNode* temp = head;
        int maxi = temp->val;

        while(temp != NULL && temp->next != NULL){
            if(temp->next->val < maxi){
                temp->next = temp->next->next;
            }
            else{
                temp = temp->next;
                maxi = max(maxi, temp->val);
            }
        }
        return reverse(head);
    }
};