#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include"List.h"

void main() {
	list* head = NULL;
	int num, index;
	head = Build_List();
	Print_List(head);
}