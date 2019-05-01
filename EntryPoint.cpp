#include"Header.h"

int main()
{
	PNODE Head = NULL;
	BOOL bret = FALSE;
	int iRet = 0;
	bret = InsertFirst(&Head, 51);
	bret = InsertFirst(&Head, 21);
	bret = InsertFirst(&Head, 11);

	//Display(Head);
	/*iRet=Count(Head);
	printf("Total Node Count is %d\n", iRet);*/
	
	bret = InsertLast(&Head, 101);
	//Display(Head);
	/*iRet =Count(Head);
	printf("Total Node Count is %d", iRet);*/

	bret = InsertAtPos(&Head, 31, 3);
	Display(Head);
	/*iRet = Count(Head);
	printf("Total Node Count is %d", iRet);
	*/
	/*bret = DeleteFirst(&Head);
	Display(Head);
	
	bret = DeleteLast(&Head);
	Display(Head);
	*/

	bret = DeleteAtPos(&Head, 2);
	Display(Head);

}