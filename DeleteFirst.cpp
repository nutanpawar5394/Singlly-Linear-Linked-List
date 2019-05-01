#include"Header.h"

BOOL DeleteFirst(PPNODE First)
{
	PNODE temp = (*First);
	
	if( *First == NULL)
	{
		return TRUE;
	}
	else if((*First)->next == NULL)
	{
		free(*First);
		*First = NULL;
	}
	else
	{
		*First = temp->next;
		free(temp);
	}
}