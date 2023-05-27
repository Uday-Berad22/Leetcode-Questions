//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
struct Node* modifyTheList(struct Node *head);
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void print(Node *head)
{
    Node *temp=head;
	while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}


// } Driver Code Ends
/*Complete the function below
Node is as follows:
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/
class Solution{
    public:
    struct Node* modifyTheList(struct Node *head)
    {
        Node *p=head,*q=head->next;
        while(q&&q->next){
            p=p->next;
            q=q->next;
            if(q)
            q=q->next;
        }
        q=p;
        p=p->next;
        Node * cur=p,*nex=p,*prev=NULL;
        while(nex!=NULL){
            cur=nex;
            nex=nex->next;
            cur->next=prev;
            prev=cur;
            if(nex==NULL){
                q->next=cur;
            }
        }
        p=head;
        p=head;
        Node *temp=cur;
        while(cur!=NULL){
            int x=cur->data;
            cur->data=p->data;
            p->data=x-p->data;
            cur=cur->next;
            p=p->next;
        }
        cur=temp;
        prev=NULL;
        nex=temp;
        while(nex!=NULL){
            cur=nex;
            nex=nex->next;
            cur->next=prev;
            prev=cur;
            if(nex==NULL){
                q->next=cur;
            }
        }
        return head;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		struct Node *head = NULL,*temp=NULL;
		while(n--){
		    int a;
            cin>>a;
			Node *newNode = new Node(a);
			if(head==NULL)
                head=newNode;
            else
                temp->next=newNode;
            temp=newNode;
		}
		Solution obj;
		head = obj.modifyTheList(head);
		print(head);
		
	}
    return 0;
}
// } Driver Code Ends