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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode*p=list1, *q=list2, *start=NULL, *head=NULL;
        while(p!=NULL && q!=NULL){
            if(p->val<=q->val){
                if(start==NULL){
                    start=p;
                    head=start;
                }else{
                    start->next=p;
                    start=start->next;
                }
                p=p->next; 
            }else{
                if(start==NULL){
                    start=q;
                    head=start;
                }else{
                    start->next=q;
                    start=start->next;
                }
                q=q->next; 
            }
        }
        if(p!=NULL){
            start->next=p;
        }else{
            start->next=q;
        }
        return head;
    }
};
