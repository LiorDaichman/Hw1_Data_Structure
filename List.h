#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct List list;
struct List {
	int data;
	list* next;
};

list* Build_List();
list* Retun_Number_From_The_List(char num);
void Print_List(list* head);

