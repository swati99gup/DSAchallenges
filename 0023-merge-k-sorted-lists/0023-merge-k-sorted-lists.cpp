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
struct cmp {
    bool operator()(ListNode* a, ListNode* b) {
        return a->val > b->val;   // min heap
    }
};

priority_queue<ListNode*, vector<ListNode*>, cmp> pq;
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,cmp>pq;
        int k=lists.size();
        for(auto head:lists){
            if(head)pq.push(head);
        }
        ListNode *dummy=new ListNode();
        ListNode * temp=dummy;
       
        while(!pq.empty()){
            ListNode* node=pq.top();
            pq.pop();
temp->next=node;
temp=temp->next;
if(node->next){
    pq.push(node->next);
}

}
return dummy->next;
    }
};