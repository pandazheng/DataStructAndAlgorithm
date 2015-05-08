//
//  main.c
//  FetchDemo
//
//  Created by pandazheng on 15/5/8.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

#define FETCH 1000
#define RATE 0.0171

int main(int argc, const char * argv[]) {

    double corpus[49];
    int i;
    corpus[48] = (double)FETCH;
    for (i = 47 ; i > 0 ; i--)
    {
        corpus[i] = (corpus[i+1] + FETCH) / (1 + RATE/12);
    }
    
    for (i = 48 ; i > 0 ; i--)
    {
        printf("第%d月未本利合计:%.2f\n",i,corpus[i]);
    }
    return 0;
}
