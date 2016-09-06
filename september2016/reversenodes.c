#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void print_reverse_recursive (struct node *);
void print (struct node *);
void insert_new_node (struct node **, int );
//Driver Function
int main()
{
	struct node *head = NULL;
	insert_new_node (&head, 1);
	insert_new_node (&head, 2);
	insert_new_node (&head, 3);
	insert_new_node (&head, 4);
	printf ("LinkedList : ");
	print (head);
	printf ("\nLinkedList in reverse order : ");
	print_reverse_recursive (head);
	printf ("\n");
	return 0;
}
void print_reverse_recursive (struct node *head) //Recursive Reverse
{
	if (head != NULL)
		{
			//Recursive call first
			print_reverse_recursive(head -> next);
			// Print later
			printf ("%d ", head -> data);
		}
}
void print (struct node *head) //Print the linkedlist normal
{
	if (head != NULL)
		{
			printf ("%d ", head -> data);
			print (head -> next);
		}
		return;
}
void insert_new_node (struct node ** head_ref, int new_data) //New data added in the start
{
	struct node * new_node = (struct node *) malloc (sizeof (struct node));
	new_node -> data = new_data;
	new_node -> next = (*head_ref);
	(*head_ref) = new_node;
}
		
