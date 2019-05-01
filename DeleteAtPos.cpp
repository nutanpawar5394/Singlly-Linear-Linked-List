#include"Header.h"

BOOL DeleteAtPos(PPNODE First, int ipos)
{
	PNODE temp1 = *First;
	PNODE temp2 = NULL;
	int icnt = 0,i=0;
	icnt = Count(*First);
	if (ipos<1 || ipos>icnt)
	{
		return FALSE;
	}
	if (ipos == 1)
	{
		return(DeleteFirst(First));
	}
	else if (ipos == icnt)
	{
		return(DeleteLast(First));
	}
	else
	{
		for (i = 1; i <= ipos - 2; i++)
		{
			temp1 = temp1->next;
		}
		temp2 = temp1->next;
		temp1->next =temp1 ->next->next;
		free(temp2);
	}
	return TRUE;
}