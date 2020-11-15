#pragma once
#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

struct Linked_List{
    int Data;
    struct Linked_List* Head_To_Tail;
};

void Build_Linked_List(struct Linked_List**,int);
void Sort_Linked_List(struct Linked_List*,int);
void Swap_Numbers(struct Linked_List*,struct Linked_List*);
int Search_Number(struct Linked_List*,int);
void Reverse_Linked_List(struct Linked_List**);
void Sum_Linked_List(struct Linked_List*,int*);
void Multiplication_Even_Indexs_Linked_List(struct Linked_List*,int*,int);
void Print_Linked_List(struct Linked_List*);