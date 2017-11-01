/*
������������

���뻷����VC++ 6.0
����ϵͳ��windows XP SP3
*/
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

//    ���������еĽڵ�
typedef struct node
{
	int member;                //    �ڵ��еĳ�Ա
	struct node *pNext;        //    ָ����һ���ڵ��ָ��
}Node, *pNode;

//    ��������
pNode CreateList();                //    ����������
void TraverseList(pNode);        //    ����������

int main()
{
	pNode pHead = NULL;            //    �����ʼ��ͷ�ڵ㣬�ȼ��� struct Node *pHead == NULL
	pHead = CreateList();        //    ����һ����ѭ�������������������ͷ���ĵ�ַ����pHead
	TraverseList(pHead); 
	getchar();   //    ���ñ���������
	getchar();
}

//    ����������
pNode CreateList()
{
	int i;                                            //    ��������ѭ��
	int len;                                        //    ���������Ч�ڵ������
	int val;                                        //    ������ʱ����û����������
	pNode pHead = (pNode)malloc(sizeof(Node));        //  ����һ���������Ч���ݵ�ͷ���
	pNode pTail = pHead;                            //    ��������һ���ڵ�
	pTail->pNext = NULL;                            //    ���һ���ڵ��ָ����Ϊ��
	printf("������ڵ������");
	scanf_s("%d", &len);
	for (i = 0; i < len; i++)
	{
		printf("�� %d ���ڵ����ֵ��", i + 1);
		scanf_s("%d", &val);
		pNode pNew = (pNode)malloc(sizeof(Node));    //    Ϊ�ڵ����ռ�
		pNew->member = val;                            //���û���������ݸ����ڵ�ĳ�Ա
		pTail->pNext = pNew;                        //�����һ���ڵ��ָ��ָ����һ���µĽڵ�
		pNew->pNext = NULL;                            //���½ڵ��е�ָ����Ϊ��
		pTail = pNew;                                //���½ڵ㸳������һ���ڵ�
	}
	return pHead;                                    //����ͷ�ڵ�

}

//    ����������
void TraverseList(pNode pHead)
{
	pNode p = pHead->pNext;                            //��ͷ�ڵ��ָ�������ʱ�ڵ�p
	while (NULL != p)                                //�ڵ�p��Ϊ�գ�ѭ��    {
	{
		printf("%d ", p->member);
		p = p->pNext;
	}
}

