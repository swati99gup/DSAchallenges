/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)return NULL;
    unordered_map<Node*,Node*>mp;
    Node* copy=head;
    while(copy){
        mp[copy]=new Node(copy->val);
        copy=copy->next;
    }
    copy=head;
    while(copy){
        mp[copy]->next=mp[copy->next];
        mp[copy]->random=mp[copy->random];
        copy=copy->next;
    }
    return mp[head];
    }
};