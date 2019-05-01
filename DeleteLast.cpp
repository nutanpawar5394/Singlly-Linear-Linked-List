#include"Header.h"

BOOL DeleteLast(PPNODE First)
{
	PNODE temp = *First;
	if (*First != NULL)
	{
		while (temp->next->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
	return TRUE;
}