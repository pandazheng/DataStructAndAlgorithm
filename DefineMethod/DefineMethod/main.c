//
//  main.c
//  DefineMethod
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

#define MAX(a,b) \
    a>b?a:b

int main(int argc, const char * argv[]) {

    int a = 10,b = 20;
    printf("MAX = %0.1f\n",MAX(10.2,22.3));
    printf("result = %d\n",MAX(a, b));
    return 0;
}
