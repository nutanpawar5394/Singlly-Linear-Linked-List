#include"Header.h"

void Display(PNODE First)
{
	if (First== NULL)
	{
		return;
	}
	else
	{
		while (First != NULL)
		{
			printf("| %d |->", First->data);
			First = First->next;
		}
	}

}