#include"Header.h"

BOOL InsertLast(PPNODE First, int no)
{
	PNODE temp = (*First);
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;

	if (*First == NULL)
	{
		* First = newn;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;

	}
	return TRUE;
}