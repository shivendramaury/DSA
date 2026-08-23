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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        int count=0;

        while(temp != NULL){
            temp=temp->next;
            count++;
        }

        temp = head;
        if(count !=0){
            k = k%count;
        }
        

        if(k == 0){
            return head;
        }
        if(head == NULL){
            return NULL;
        }

        int tempo = count-k;

        ListNode* temp1= head;

        while(tempo-1){
            temp1 = temp1->next;
            tempo--;
        }
        ListNode* temp2 = temp1->next;
        ListNode* fin = temp2;
        temp1->next = NULL;

        while(temp2->next != NULL){
            temp2 = temp2->next;
        }
        temp2->next = head;

        return fin;
    }
};