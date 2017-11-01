/*
链表创建及遍历

编译环境：VC++ 6.0
编译系统：windows XP SP3
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//    定义链表中的节点
typedef struct node
{
	int member;                //    节点中的成员
	struct node *pNext;        //    指向下一个节点的指针
}Node, *pNode;

//    函数声明
pNode CreateList();                //    创建链表函数
void TraverseList(pNode);        //    遍历链表函数

int main()
{
	pNode pHead = NULL;            //    定义初始化头节点，等价于 struct Node *pHead == NULL
	pHead = CreateList();        //    创建一个非循环单链表，并将该链表的头结点的地址付给pHead
	TraverseList(pHead); 
	getchar();   //    调用遍历链表函数
	getchar();
}

//    创建链表函数
pNode CreateList()
{
	int i;                                            //    用于下面循环
	int len;                                        //    用来存放有效节点的字数
	int val;                                        //    用于临时存放用户输入的数据
	pNode pHead = (pNode)malloc(sizeof(Node));        //  分配一个不存放有效数据的头结点
	pNode pTail = pHead;                            //    链表的最后一个节点
	pTail->pNext = NULL;                            //    最后一个节点的指针置为空
	printf("请输入节点个数：");
	scanf_s("%d", &len);
	for (i = 0; i < len; i++)
	{
		printf("第 %d 个节点的数值：", i + 1);
		scanf_s("%d", &val);
		pNode pNew = (pNode)malloc(sizeof(Node));    //    为节点分配空间
		pNew->member = val;                            //将用户输入的数据赋给节点的成员
		pTail->pNext = pNew;                        //将最后一个节点的指针指向下一个新的节点
		pNew->pNext = NULL;                            //将新节点中的指针置为空
		pTail = pNew;                                //将新节点赋给最后的一个节点
	}
	return pHead;                                    //返回头节点

}

//    遍历链表函数
void TraverseList(pNode pHead)
{
	pNode p = pHead->pNext;                            //将头节点的指针给予临时节点p
	while (NULL != p)                                //节点p不为空，循环    {
	{
		printf("%d ", p->member);
		p = p->pNext;
	}
}

