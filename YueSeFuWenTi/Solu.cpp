//#pragma once
//#include <stdio.h>
//#include "malloc.h"
//#include <stdlib.h>
////#include "iostream"
//#define ListSize 100
//typedef int DataType;
//typedef struct Node {
//
//	DataType data;
//	struct Node *next;
//} ListNode, *LinkList;
//
//LinkList CreateCycList(int n);
//void Josephus(LinkList head, int n, int m, int k);
//
//
//void main()
//{
//
//
//	LinkList head;
//	int n, m, k;
//	printf("输入圈中个数n:");
//	scanf_s("%d",&n);
//	printf("请输入报数的序列号K：");
//	scanf_s("%d",&k);
//	printf("报数为M的人出列：");
//	scanf_s ( "%d", &m);
//
//	head = CreateCycList(n);
//	Josephus(head,n,m,k);
//	getchar();
//	getchar();
//
//}
//
//LinkList CreateCycList(int n)
//{
//	LinkList head = NULL;
//	ListNode *s=NULL;
//	ListNode *r=NULL;
//	//r = NULL;
//	int i;
//	for ( i = 1; i <=n; i++)
//	{
//		s = (ListNode*)malloc(sizeof(ListNode));
//		s->data = i;
//		s->next = NULL;
//		if (head==NULL)
//	
//			head = s;
//		
//		
//		else
//		
//			r->next = s;
//	
//		r = s;
//	}
//	r->next = head;
//	return head;
//}
//
//void Josephus(LinkList head, int n, int m, int k)
//{
//	ListNode *p, *q;
//	q = NULL;
//	int i;
//	p = head;
//	for ( i = 1; i < k; i++)
//	{
//		q = p;
//		p = p->next;
//	}
//	while (p->next!=p)
//	{
//		for ( i = 0; i < m; i++)
//		{
//			q = p;
//			p = p->next;
//		}
//		q->next = p->next;
//		printf("%4d",p->data);
//		free(p);
//		p = q->next;
//	}
//	printf("%4d\n",p->data);
//
//}
//
//
//
