//
//  main.c
//  bubble_sort
//
//  Created by pandazheng on 15/5/4.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

//数组长度
#define LENGTH(array) ( (sizeof(array)) / (sizeof(array[0])) )

//交互数值
#define swap(a,b) (a^=b,b^=a,a^=b)

/*
冒泡排序
*/
void bubble_sort(int a[],int n)
{
    int i,j;
    
    for (i = n -1 ; i > 0 ; i--)
    {
        //将a[0...i]中最大的数据放到未尾
        for (j = 0 ; j < i ; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}

/*
冒泡排序，改进版
*/
void bubble_sort2(int a[],int n)
{
    int i,j;
    int flag;
    
    for (i = n - 1 ; i > 0 ; i--)
    {
        flag = 0;   //初始标记为0
        
        //将a[0...i]中最大的数据放到未尾
        for (j = 0 ; j < i ; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
                flag = 1;
            }
        }
        
        if (flag == 0)
        {
            break;     //若没发生交换，则说明数列已有序
        }
    }
}

/*
冒泡排序
*/
void bubble_sort3(int a[],int n)
{
    int i,j;
    int flag;
    
    for (i = 0 ; i < n - 1 ; i++)
    {
        flag = 0;
        
        for (j = i + 1 ; j < n - i - 1; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
                flag = 1;
            }
        }
        
        if (flag == 0)
        {
            break;
        }
    }
}

int main(int argc, const char * argv[]) {
    
    int i;
    int a[] = {10,20,50,30,40,80,70};
    int iLen = LENGTH(a);
    
    printf("before sort:\n");
    for (i = 0 ; i < iLen ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    //bubble_sort(a, iLen);
    //bubble_sort2(a, iLen);
    bubble_sort3(a,iLen);
    
    printf("after sort:\n");
    for (i = 0 ; i < iLen ; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
