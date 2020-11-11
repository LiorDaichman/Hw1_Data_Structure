#include "List.h"

list* Build_List()
{
	list* head = NULL, * temp = head;
	char num;
	printf("Enter numbers for the list, for ending the list enter  dot -> '.' : \n");
	scanf("%c ", &num);
	while (num != '.')
	{
		if (head == NULL)
		{
			head = Retun_Number_From_The_List(num);
			temp = head;
		}
		else
		{
			temp->next = Retun_Number_From_The_List(num);
			temp = temp->next;
		}
		scanf("%c", &num);
	}
	return head;
}

list* Retun_Number_From_The_List(char num)
{
	list* node = (list*)malloc(sizeof(list));
	node->data = num;
	node->next = NULL;
	return node;
}

void Print_List(list* head)
{
	list* temp = head;
	printf("\nThe list is: ");
	while (temp != NULL)
	{
		printf("%c ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}