#include"Header.h"

BOOL InsertAtPos(PPNODE First, int no, int ipos)
{
	PNODE temp = (*First);
	PNODE newn = NULL;
	int icnt = 0;
	icnt = Count(*First);
	int bret = 0;
	int i = 0;
	if ((ipos < 1) || (ipos > icnt + 1))
	{
		return FALSE;
	}
	else if (ipos == 1)
	{
		bret=InsertFirst(First, no);
		return bret;
	}
	else if (ipos == icnt + 1)
	{
		bret = InsertLast(First, no);
		return bret;
	}
	else
	{
		newn = (PNODE)malloc(sizeof(NODE));
		newn->data = no;
		newn->next = NULL;

		for (i = 1; i <= ipos - 2; i++)
		{
			temp = temp->next;
		}
		newn->next= temp->next;
		temp->next = newn;
	}

	return TRUE;

}