#include<iostream>
using namespace std;

bool isCyclic(node* head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}

node* FindNode(node* head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL){
        fast=fast->next->next;
        slow=slow->next;

        if(slow==fast){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return fast;
        }
    }
}

void Floyds(node* head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL){
        fast=fast->next->next;
        slow=slow->next;

        if(slow==fast){
            node* prev=head;
            while(prev->next!=fast){
                prev=prev->next;
            }
            slow=head;
            while(slow!=fast){
                prev=fast;
                fast=fast->next;
                slow=slow->next;
            }
            prev->next=NULL;
            return;

        }

    }
}












