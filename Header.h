#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef int BOOL;
#define TRUE  1;
#define FALSE  0;

struct node
{
	int data;
	struct node * next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;

BOOL InsertFirst(PPNODE, int);
BOOL InsertLast(PPNODE, int);
BOOL InsertAtPos(PPNODE, int, int);
void Display(PNODE);
int Count(PNODE);
BOOL DeleteFirst(PPNODE);
BOOL DeleteLast(PPNODE);
BOOL DeleteAtPos(PPNODE, int);
