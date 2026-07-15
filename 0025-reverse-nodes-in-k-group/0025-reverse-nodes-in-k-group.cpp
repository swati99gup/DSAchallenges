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
ListNode* reverseList(ListNode* head) {
        ListNode* temp=head;
       ListNode* prev=NULL;
    
        while(temp){
           ListNode* front=temp->next;
            temp->next=prev;
            prev=temp;
            temp=front;
        }
        return prev;
    }
   ListNode* findKthNode(ListNode* kthnode,int k){
    k-=1;
        while(k>0&&kthnode){
            k--;
            if(kthnode==NULL)return NULL;

kthnode=kthnode->next;
        }
        return kthnode;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
   
    
       ListNode* prev=NULL;
        while(temp){
            ListNode* kthnode= findKthNode(temp,k);
            if(kthnode==NULL){
              if(prev)prev->next=temp;
                break;
            }

          
         ListNode* nextnode=kthnode->next;
           kthnode->next=nullptr;
          reverseList(temp);
         
          if(temp==head){
            head=kthnode;
          }
       else{
            prev->next=kthnode;}
          prev=temp;
          temp=nextnode;
           

        }
        return head;
    }
};