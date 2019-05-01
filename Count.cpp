#include"Header.h"

int Count(PNODE First)
{
	int icnt = 0;

	while (First != NULL)
	{
		icnt++;
		First = First->next;
	}

	return icnt;
}