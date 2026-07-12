/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode *>st;
        if(!head)false;
        while(st.find(head)==st.end()&&head){
            st.insert(head);
            head=head->next;
        }
        if(head==nullptr)return false;
        return true;
    }
};