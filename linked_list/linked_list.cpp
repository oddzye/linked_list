#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>

node* first = NULL; //указатель на первый узел (≈сли указатель на первый элемент равен нулл это означет, что в списке нет элементов. )  

void addToEnd(type* elem) {
	if (!first) { //если указатель на первый элемент списка существует , т.е. не равен NULL) !!!¬ы поставили здесь !first , € не пон€л почему так .¬едь если first=NULL нам как раз и надо создавать заново указатель на первый элемент !!!!!!!!
		first = (node*)malloc(sizeof(node)); //выдел€ем пам€ть дл€ указател€ на первый элемент 
		first->data = elem; //присваиваем значение первому элементу 
		first->next = NULL;// присваиваем NULL т.к. не знаем указател€ на следующий элемент и нам не надо с ним работать т.к. добавл€ем в конец
	}
	else {
		node* tmp = first; //создаем переменную ,в которой будет лежать указатель на первый элемент
		while (tmp->next != NULL) { // перебираем элементы в списке 
			tmp = tmp->next;
		}
		node* newnode = (node*)malloc(sizeof(node)); // выдел€ем пам€ть дл€ указател€ на добавленный нами элемент 
		newnode->data = elem;
		newnode->next = NULL;
		tmp->next = newnode;// делаем так,чтобы предпоследний элемент указывал на наш
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
		while (i < afterIdx && tmp->next) //добираемс€ до элемента с необходимым номером 
		{
			tmp = tmp->next;
			i++;
		}
		node* newnode = (node*)malloc(sizeof(node)); //выдел€ем пам€ть дл€ добовл€емого узла
		newnode->data = elem;//присваиваем значени в узле 
		if (tmp->next) // если этот элемент в списке не последний выполн€етс€ условие 
		{
			newnode->next = tmp->next; //новый узел будет указывать на следующий 
		}
		else
		{
			newnode->next = NULL; //если добавл€емый узел - последний элемент в списке 
		}
		tmp->next = newnode; // элемент ,который сейчас находитс€ перед добавл€емым узлом должен указывать на него 
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