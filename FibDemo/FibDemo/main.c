//
//  main.c
//  FibDemo
//
//  Created by pandazheng on 15/5/8.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

#define NUM 13

int main(int argc, const char * argv[]) {
    
    int i;
    long fib[NUM] = {1,1};
    
    for (i = 2 ; i < NUM ; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    for (i = 0 ; i < NUM ; i++)
    {
        printf("%d月兔子总数:%ld\n",i,fib[i]);
    }
    
    return 0;
}
