#include <iostream>

using namespace std;

struct node
{
    int popularity;
    node *next;
};
node* createFreinds(int num);
void populateFriends(node *head ,int popularity[]);
void deleteFriends(node *head ,int deleteNum);
void printList(node *head);

int main()
{
    int t;
    cin>>t;
    while(t != 0)
    {
        int friends , deleted;
        cin>>friends;
       cin>>deleted;
       int arr[friends];
       for(int i=0; i<friends; i++)
       {
           cin>>arr[i];
       }
       node *cHead = createFreinds(friends);
       populateFriends(cHead,arr);
       deleteFriends(cHead,deleted);
       printList(cHead);
       t--;
    }
    return 0;
}
node* createFreinds(int num)
{
  node *head = NULL;
  while(num != 0)
  {
      node *newN = new node;
      if(head == NULL)
        head = newN;
      else
      {
          node *q = head;
        while(q != NULL)
            q = q->next;

          q->next = newN;
      }
      num--;
  }
  return head;
}
void populateFriends(node *head ,int cpopularity[])
{
    int i=0;
  node *q = head;
  while(q != NULL)
  {
      q->popularity = cpopularity[i];
    q = q->next;
    i++;
  }
}
void deleteFriends(node *head ,int deleteNum)
{
  node *temp = head;
  while(deleteNum !=0 && temp != NULL)
  {
      if(temp->next->next == NULL &&deleteNum !=0 && temp->popularity > temp->next->popularity)
      {
          node *temp2 = temp;
          temp2->next = NULL;
          temp = temp->next;
          delete temp;
      }
     else if(temp->popularity < temp->next->popularity)
      {
          head = head->next;
          delete temp;
          temp = head;
          deleteNum--;
      }
      else
        temp = temp->next;
  }
}
void printList(node *head)
{
  node *temp = head;
  while(temp != NULL)
  {
      cout<<temp->popularity<<" ";
      temp = temp->next;
  }
  cout<<endl;
  delete temp;
}





