//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;


// } Driver Code Ends
/*
 
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node *head0=NULL,*head1=NULL,*head2=NULL,*ph0=NULL,*ph1=NULL,*ph2=NULL;
        Node *p=head;
        while(p!=NULL){
            Node *temp=p->next;
            if(p->data==0){
                if(head0==NULL){
                    head0=p;
                    p->next=NULL;
                    ph0=head0;
                }
                else{
                    ph0->next=p;
                    p->next=NULL;
                    ph0=p;
                }
            }
            else  if(p->data==1){
                if(head1==NULL){
                    head1=p;
                    p->next=NULL;
                    ph1=head1;
                }
                else{
                    ph1->next=p;
                    p->next=NULL;
                    ph1=p;
                }
            }
            else  if(p->data==2){
                if(head2==NULL){
                    head2=p;
                    p->next=NULL;
                    ph2=head2;
                }
                else{
                    ph2->next=p;
                    p->next=NULL;
                    ph2=p;
                }
            }
            p=temp;
        }
        if(head0)
        head=head0;
        else if(head1)
        head=head1;
        else if(head2)
        head=head2;
     
        while(head0!=NULL&&head0->next!=NULL){
            head0=head0->next;
        }
        if(head0){
            head0->next=head1;
        }
         while(head1!=NULL&&head1->next!=NULL){
            head1=head1->next;
        }
        if(head1){
            head1->next=head2;
        }
        else if(head0)
        head0->next=head2;
        return head;
    }
};


//{ Driver Code Starts.

// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

/* Drier program to test above function*/
void insert(int n1) {
    int n, value, i;
    // scanf("%d",&n);
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {

    int n;

    int t;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        insert(n);
        Solution ob;
        struct Node *newHead = ob.segregate(start);
        printList(newHead);
    }

    return 0;
}
// } Driver Code Ends