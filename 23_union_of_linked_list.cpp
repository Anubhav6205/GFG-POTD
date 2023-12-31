/*
// structure of the node is as follows

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
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        // code here
        set<int>s;
        Node *curr=head1;
        while(curr!=NULL){
            s.insert(curr->data);
            curr=curr->next;
        }
        curr=head2;
        while(curr!=NULL){
            s.insert(curr->data);
            curr=curr->next;
        }
        Node* temp=new Node(-1);
        Node* head3=temp;
        for(auto it:s){
            temp->next=new Node(it);
            temp=temp->next;
        }
        return head3->next;
    }
};