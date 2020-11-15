#include "Linked_List.h"

void Build_Linked_List(struct Linked_List** Building, int Move_To_Data){    //Byliding the list
    struct Linked_List* Temp_Struct = (struct Linked_List*)malloc(sizeof(struct Linked_List));
    Temp_Struct->Data = Move_To_Data;   //Entring number to data
    Temp_Struct->Head_To_Tail = *Building;  //Entering the struct from main to const struct when we sending the struct adders from main
    *Building = Temp_Struct;
}

void Sort_Linked_List(struct Linked_List* Start_To_End,int count) { //Puting the number in right order
    struct Linked_List* Temp_1;
    struct Linked_List* Temp_2 = NULL;
    for (int i = 0; i < count; i++){
        Temp_1 = Start_To_End;  //Struct=Struct
        while (Temp_1->Head_To_Tail != Temp_2) {    //while first numeber not eqvual other number
            if (Temp_1->Data > Temp_1->Head_To_Tail->Data)
                Swap_Numbers(Temp_1, Temp_1->Head_To_Tail); //Making swap
            Temp_1 = Temp_1->Head_To_Tail; //moving to next number
        }
        Temp_2 = Temp_1; // changing the other temp to last temp its for departure plan
    }
}

void Swap_Numbers(struct Linked_List* Number_1, struct Linked_List* Number_2){  //Regular swap
    int temp = Number_1->Data;
    Number_1->Data = Number_2->Data;
    Number_2->Data = temp;
}

int Search_Number(struct Linked_List* From_Start_To_End, int Index){    //Search number in the list
    struct Linked_List* current = From_Start_To_End;
    int count = 0;
    while (current != NULL){    //If list end
        count++;
        if (current->Data == Index) //If the number is in the index
            return count;
        current = current->Head_To_Tail; //To the next number
    }
    return 0; //Not in the list
}

void Reverse_Linked_List(struct Linked_List** From_Start_To_End){   //Reverse the list
    struct Linked_List* Right_Order = *From_Start_To_End;
    struct Linked_List* Bad_Order = NULL;
    struct Linked_List* Right_Order_Next = NULL;
    while (Right_Order != NULL) {   //Ending the reverse
        Right_Order_Next = Right_Order->Head_To_Tail;   //We start process like a funcation that make swap ,
        Right_Order->Head_To_Tail = Bad_Order;          //taking the last number and puting in the start ,
        Bad_Order = Right_Order;                        //and the first to end by changing they index like ,
        Right_Order = Right_Order_Next;                 //in swap funcation (2 funcation above)
    }
    *From_Start_To_End = Bad_Order;
}

void Sum_Linked_List(struct Linked_List* From_Start_To_End, int* Sum) { //regular sum faction
    if (!From_Start_To_End)
        return;
    Sum_Linked_List(From_Start_To_End->Head_To_Tail, Sum);
    *Sum += From_Start_To_End->Data;
}

void Multiplication_Even_Indexs_Linked_List(struct Linked_List* From_Start_To_End, int* Sum, int Index) { //Multiplicatio funcation like sum funcation above but only when index are even
    if (!From_Start_To_End)
        return;
    Index++;
    if (Index % 2 == 0)
        *Sum *= From_Start_To_End->Data;
    Multiplication_Even_Indexs_Linked_List(From_Start_To_End->Head_To_Tail, Sum, Index);
}

void Print_Linked_List(struct Linked_List* From_Start_To_End) { //regular Print faction
    struct Linked_List* temp = From_Start_To_End;
    int count = 0;
    printf("\nThe List is: ");
    while (temp != NULL)
    {
        printf("%d ", temp->Data);
        temp = temp->Head_To_Tail;
        count++;
    }
    printf("\nThe Lenth is: %d", count);
}

