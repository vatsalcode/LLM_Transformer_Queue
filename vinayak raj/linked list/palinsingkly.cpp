#include<bits/stdc++.h>
using namespace std;
struct Node{
  int data;
  struct Node *next;
  Node(int x){
    data=x;
    next=NULL;
  }
};
void append(struct Node** head_ref,struct Node** tail_ref,int new_data)
{
  struct Node* new_node =new Node(new_data);
  if(*head_ref==NULL)
    *head_ref=new_node;
  else
    (*tail_ref)->next=new_node;
  *tail_ref=new_node;
}
bool isPalindrome(Node *head);
int main()
{
  int i,n,l;
  struct Node *head=NULL, *tail=NULL;
  cin>>n;
  for(i=1;i<=n;i++)
  {
    cin>>l;
    append(&head,&tail,l);
  }
  cout<<isPalindrome(head)<<endl;
  return 0;
}
bool isPalindrome(Node *head)
{
    bool ans=true;
    vector<int> v;
    while(head!=NULL)
    {
        int temp=head->data;
        v.push_back(temp);
        head=head->next;
    }
    int h=0;
    int n=v.size();
    for(int i=0;i<v.size()/2;i++)
    {
        if(v[i]==v[n-i-1])
        {
            continue;
        }
        else
        {
            ans=false;
            break;
        }
    }
    return ans;
}
