//
//  main.c
//  insert_sort
//
//  Created by pandazheng on 15/5/4.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

//数组长度
#define LENGTH(array) ( (sizeof(array)) / (sizeof(array[0])) )

/*
直接插入排序
*/
void insert_sort(int a[],int n)
{
    int i,j,k;
    
    for (i = 1 ; i < n ; i++)
    {
        //为a[i]在前面的a[0...i-1]有序区间中找一个合适的位置
        for (j = i - 1 ; j >= 0 ; j--)
        {
            if (a[j] < a[i])
                break;
        }
        
        //如找到一个合适的位置
        if (j != i - 1)
        {
            //将比a[i]大的数据向后移
            int temp = a[i];
            for (k = i - 1 ; k > j ; k--)
            {
                a[k+1] = a[k];
            }
            a[k+1] = temp;
        }
    }
}

int main(int argc, const char * argv[]) {
    
    int i;
    int a[] = {20,40,30,10,60,50};
    int iLen = LENGTH(a);
    
    printf("before sort:");
    for (i = 0 ; i < iLen ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    
    insert_sort(a, iLen);
    
    printf("after sort:");
    for (i = 0 ; i < iLen ; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
