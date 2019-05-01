#include "Header.h"

BOOL InsertFirst(PPNODE First, int no)
{
	PNODE newn = NULL;

	newn = (PNODE)malloc(sizeof(NODE));
	newn->data = no;
	newn->next = NULL;

	newn->next = *First;
	*First = newn;

	return TRUE;
}