#pragma once
#pragma once


//typedef shtraf type;
typedef int type;

struct node {
	type* data;
	node* next;
};

void addToEnd(type* elem);
void add(int afterIdx, type* elem);
type* get(int idx);
void set(int idx, type* elem);