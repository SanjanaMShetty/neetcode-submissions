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
    struct Compare{
        bool operator()(ListNode* a,ListNode* b){
            return a->val>b->val;
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        priority_queue<ListNode*,vector<ListNode*>,Compare>minHeap;
        for(ListNode* list: lists){
            if(list!=nullptr){
                minHeap.push(list);
            }
        }
        while(!minHeap.empty()){
            ListNode* node = minHeap.top();
            minHeap.pop();
            curr->next = node;
            curr = curr->next;
        if(node->next!=nullptr){
            minHeap.push(node->next);
        }
        }
        return dummy->next;
    }
};
