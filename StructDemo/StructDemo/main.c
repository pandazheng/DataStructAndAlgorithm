//
//  main.c
//  StructDemo
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

struct People
{
    char* name;
    int score;
};

int main(int argc, const char * argv[]) {

    struct People p;
    p.name = "jack";
    p.score = 98;
    printf("score: %d\n",p.score);
    
    struct People p2 = p;
    p.score = 80;
    printf("name = %s\n",p2.name);
    printf("score = %d\n",p2.score);
    return 0;
}
