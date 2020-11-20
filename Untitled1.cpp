#include <iostream>
#include <cstdlib>
using namespace std;

struct Node 
{
   int data;
   struct Node *next;
};

struct Node* head = NULL;

void insert(int new_data) 
{
   struct Node* new_node = new struct Node;
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}

void display() 
{
   struct Node* ptr;
   ptr = head;
   int count=0;
   while (ptr != NULL) 
   {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
      count++;
   }
   cout<<endl<<"No:of elements in Linked List is: "<<count;
}

void delete_from_beg()
{
	struct Node *temp;
	if(head == NULL)
	{
		cout<<"No nodes are there to delete: ";
	}
	else if(head->next == NULL)
	{
		temp = head;
		head = NULL;
		free(temp);
	}
	else
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

void delete_from_end()
{
	struct Node *temp,*prev;
	temp=head;
	while(temp->next != NULL)
	{
		
	}
}

int main() 
{
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: ";
   display();
   cout<<endl<<"List after deleting an element from begining: ";
   delete_from_beg();
   display();
   return 0;
}
