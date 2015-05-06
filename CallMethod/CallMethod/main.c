//
//  main.c
//  CallMethod
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

int max(int a,int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(int argc, const char * argv[]) {

    int a = 10,b = 20;
    int result = max(a,b);
    printf("result : %d\n",result);
    return 0;
}
