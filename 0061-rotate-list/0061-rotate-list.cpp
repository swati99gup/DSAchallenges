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
        if(head==NULL||head->next==NULL)return head;
       ListNode* node=head;
       ListNode* temp=head;
       
        int cnt=0;
        while(temp){
            temp=temp->next;
            cnt++;
        }
        k%=cnt;
        if(k==0)return head;
       int target=cnt-k;
        temp=head;
        while(target>1){
            target-=1;
temp=temp->next;
        }
       ListNode* nexttemp=temp->next;
        head=nexttemp;
        temp->next=NULL;
        while(nexttemp->next){
            nexttemp=nexttemp->next;
        }
        nexttemp->next=node;
return head;
    }
};