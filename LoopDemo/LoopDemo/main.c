//
//  main.c
//  LoopDemo
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    for (int a = 0 ; a < 10 ; a++)
    {
        printf("Hello %d\n",a);
    }
    
    for (int i = 0 ; i < 10 ; printf("%d\n",i++))
    {
        printf("<<<<<<\n");
    }
    
    int num = 0;
    while(num < 100)
    {
        printf("%d\n",num);
        num++;
    }
    
    int k = 0;
    do{
        printf("%d\n",k);
        k++;
    }while(k < 10);
    return 0;
}
