//
//  main.c
//  Static_Sqlist
//
//  Created by pandazheng on 15/5/5.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

#define MAXSIZE 10

void insertElement(int Sqlist[],int *len,int i,int x)
{
    int t;
    if (*len == MAXSIZE || i < 1 || i > *len+1)
    {
        printf("This insert is illegal\n");
        return;
    }
    
    for (t = *len - 1 ; t >= i - 1 ; t--)
    {
        Sqlist[t+1] = Sqlist[t];
    }
    Sqlist[i-1] = x;
    *len = *len + 1;
}

void DelElement(int Sqlist[],int *len,int i)
{
    int j;
    if (i < 1 || i > *len)
    {
        printf("This del is illegal\n");
        return;
    }
    
    for (j = i ; j <= *len - 1 ; j++)
    {
        Sqlist[j-1] = Sqlist[j];
    }
    *len = *len - 1;
}


int main(int argc, const char * argv[]) {
    int Sqlist[MAXSIZE];
    int len;
    int i;
    printf("input array:(like 12,13,14):");
    for (i = 0 ; i < 6 ; i++)
    {
        scanf("%d,",&Sqlist[i]);
    }
    len = 6;
    printf("\nThe spare length is : %d\n",MAXSIZE - len);
    insertElement(Sqlist, &len, 3, 88);
    for (i = 0 ; i < len ; i++)
    {
        printf("%d ",Sqlist[i]);
    }
    printf("\nThe spare length is : %d\n",MAXSIZE - len);
    insertElement(Sqlist, &len, 11, 0);
    DelElement(Sqlist, &len, 6);
    for (i = 0 ; i < len; i++) {
        printf("%d ",Sqlist[i]);
    }
    printf("\nThe spare length is %d\n",MAXSIZE - len);
    return 0;
}
