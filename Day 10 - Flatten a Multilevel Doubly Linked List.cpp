/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
    Node* fun(Node* head){
        Node* curr=head,*last=head;
        while(curr){
            Node* neeche=curr->child;
            Node* aage=curr->next;
            if(neeche){
                Node* branchLast=fun(neeche);
                curr->next=neeche;
                neeche->prev=curr;
                branchLast->next=aage;
                if(aage)
                    aage->prev=branchLast;
                curr->child=NULL;
                curr=branchLast;
            }
            else
                curr=aage;
            if(curr) last=curr;
        }
        return last;
    }
public:
    Node* flatten(Node* head) {
        if(head)    fun(head);
        return head;
    }
};
