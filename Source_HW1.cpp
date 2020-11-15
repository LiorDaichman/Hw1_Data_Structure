#include<stdio.h>
#include<stdlib.h>
#include "Linked_List.h"
#define _CRT_SECURE_NO_WARNINGS

int main() {
	struct Linked_List* start = NULL;
    int arr[100] , count = 0 , temp , number = 0;
    printf("Enter The numbers for the linked list.\nEnter -1 for ending the list.\nThe list: "); //Input from user to start building the list
    for (int i = 0; i < 100; i++){
        scanf_s("%d", &arr[i]);
        if (arr[i] != -1) {
            Build_Linked_List(&start, arr[i]);
            count++;
        }
        else
            break;
    }
	Print_Linked_List(start);
    printf("\n\nEnter number to the linked list and the funcation will organization in the right order all numbers: ");
    scanf_s("%d", &arr[count+1]);
    Build_Linked_List(&start, arr[count+1]);
    Sort_Linked_List(start, count + 1);
    Print_Linked_List(start);
    printf("\n\nEnter a number and the funcation will find if the exists: ");
    scanf_s("%d", &number);
    temp = Search_Number(start, number);
    if (temp>0) //Index exists
        printf("\nindex in list: %d", temp);
    else  //Index not exists
        printf("\n%d dosent exists in the list.", number);
    Reverse_Linked_List(&start);
    printf("\n\nReversed Linked list:");
    Print_Linked_List(start);
    temp = 0;
    Sum_Linked_List(start, &temp);
    printf("\n\nSum of all numbers in the list: %d", temp);
    temp = 1;
    Multiplication_Even_Indexs_Linked_List(start, &temp, 0);
    printf("\n\nMultiplication all numbers that are in the even places on the list: %d\n", temp);
	return 0;
}
