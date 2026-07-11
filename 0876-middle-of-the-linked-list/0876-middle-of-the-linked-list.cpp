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
    ListNode* middleNode(ListNode* head) {
        int cnt=0;
       ListNode* temp1=head;
       ListNode* temp2=head;
        while(head){
            head=head->next;
            cnt++;
        }
        if(cnt%2==0){
            while(temp1&&temp2){
                temp1=temp1->next;
                temp2=temp2->next->next;

            }
            return temp1;
        }
        else{
           while(temp1&&temp2->next){
                temp1=temp1->next;
                temp2=temp2->next->next;

            }
            return temp1; 
        }
    }
};