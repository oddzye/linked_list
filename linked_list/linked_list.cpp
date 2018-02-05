#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

node* first = NULL; //��������� �� ������ ���� (���� ��������� �� ������ ������� ����� ���� ��� �������, ��� � ������ ��� ���������. )  

void addToEnd(type* elem) {
	if (!first) { //���� ��������� �� ������ ������� ������ ���������� , �.�. �� ����� NULL) !!!�� ��������� ����� !first , � �� ����� ������ ��� .���� ���� first=NULL ��� ��� ��� � ���� ��������� ������ ��������� �� ������ ������� !!!!!!!!
		first = (node*)malloc(sizeof(node)); //�������� ������ ��� ��������� �� ������ ������� 
		first->data = elem; //����������� �������� ������� �������� 
		first->next = NULL;// ����������� NULL �.�. �� ����� ��������� �� ��������� ������� � ��� �� ���� � ��� �������� �.�. ��������� � �����
	}
	else {
		node* tmp = first; //������� ���������� ,� ������� ����� ������ ��������� �� ������ �������
		while (tmp->next != NULL) { // ���������� �������� � ������ 
			tmp = tmp->next;
		}
		node* newnode = (node*)malloc(sizeof(node)); // �������� ������ ��� ��������� �� ����������� ���� ������� 
		newnode->data = elem;
		newnode->next = NULL;
		tmp->next = newnode;// ������ ���,����� ������������� ������� �������� �� ���
	}
}

void add(int afterIdx, type* elem)
{
	if (first)
	{
		first = (node*)malloc(sizeof(node));
		first->data = elem;
		first->next = NULL;
	}
	else {

		int i = 0;
		node* tmp = first;
		while (i < afterIdx && tmp->next) //���������� �� �������� � ����������� ������� 
		{
			tmp = tmp->next;
			i++;
		}
		node* newnode = (node*)malloc(sizeof(node)); //�������� ������ ��� ������������ ����
		newnode->data = elem;//����������� ������� � ���� 
		if (tmp->next) // ���� ���� ������� � ������ �� ��������� ����������� ������� 
		{
			newnode->next = tmp->next; //����� ���� ����� ��������� �� ��������� 
		}
		else
		{
			newnode->next = NULL; //���� ����������� ���� - ��������� ������� � ������ 
		}
		tmp->next = newnode; // ������� ,������� ������ ��������� ����� ����������� ����� ������ ��������� �� ���� 
	}

}


void set(int idx, type* elem)
{
	if (!first)
	{
		int i = 0;
		node* tmp = first;
		while (i < idx&&tmp->next)
		{
			tmp = tmp->next;
			i++;
		}
		tmp->data = elem;
	}
	else printf("first = NULL");
	

}

type* get(int idx)
{
	if (!first)
	{
		int i = 0;
		node* tmp = first;
		while (i < idx&&tmp->next)
		{
			tmp = tmp->next;
			i++;
		}

		printf("Value of %i is %d", idx, tmp->data);
		return tmp->data;
	}
	else printf("first = NULL");
	
}

int main()
{
	/*int N = 0;
	first=
	scanf_s("%d", &N);
	for (int i = 1; i < N; i++)
	{
		int count = 0;
		set(i, &count);
		count++;
	}

	get(2);*/
	//node* newnode = (node*)malloc(sizeof(node));

	//node* tmp = {&10,};
	int p = 10;
	//first = &p;
	
	for (int i = 0; i < 20; i++)
	{
		addToEnd(&p);
	}
	
	get(2);

	system("pause");
	return 0;
}