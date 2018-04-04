#include <stdio.h>
#include <stdlib.h>
#include <memory.h>


//int main()
//{
//	int* a = (int*)malloc(4 * sizeof(int));
//
//	a[0] = 10000;
//	a[1] = 20000;
//	a[2] = 30000;
//	a[3] = 100000;
//
//	int* b = (int*)malloc(10 * sizeof(int));
//
//	memcpy(b, a, 4 * sizeof(int));
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	b[i] = a[i];
//	//}
//
//	b[4] = 10001;
//	b[5] = 20002;
//	b[6] = 30003;
//	b[7] = 100004;
//	b[8] = 100500;
//	b[9] = 100700;
//
//	free(a);
//	a = b;
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//
//
//	return 0;
//}

typedef struct tagNode
{
	int Value;
	tagNode* Next;
} Node;


void AddNew(Node** PointerHead, int i)
{
	Node* NewNode = (Node*)malloc(sizeof(Node));

	if (*PointerHead == NULL)
	{
		NewNode->Value = i;
		NewNode->Next = NULL;
		*PointerHead = NewNode;
	}
	else
	{
		Node* Last = *PointerHead;
		while (Last->Next != NULL)
		{
			Last = Last->Next;
		}

		NewNode->Value = i;
		NewNode->Next = NULL;
		Last->Next = NewNode;
	}
}



int main()
{
	//Node* NewNode = (Node*)malloc(sizeof(Node));
	//NewNode->Value = 1;
	//NewNode->Next = NULL;

	//Node* NewNode2 = (Node*)malloc(sizeof(Node));
	//NewNode2->Value = 2;
	//NewNode2->Next = NULL;
	//NewNode->Next = NewNode2;

	//Node* NewNode3 = (Node*)malloc(sizeof(Node));
	//NewNode3->Value = 3;
	//NewNode3->Next = NULL;
	//NewNode2->Next = NewNode3;



	Node* Head = NULL;
	for (int i = 1; i < 10; ++i)
	{
		AddNew(&Head, i);
	}

	return 0;
}