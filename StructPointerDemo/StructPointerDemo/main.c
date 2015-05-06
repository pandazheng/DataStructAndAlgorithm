//
//  main.c
//  StructPointerDemo
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct People
{
    int age;
    char* name;
};

int main(int argc, const char * argv[]) {
    struct People p;
    printf("struct size : %lu\n",sizeof(p));
    
    struct People *p2 = malloc(sizeof(struct People));
    p2->age = 100;
    
    struct People *p1 = p2;
    p2->age = 90;
    printf("age = %d\n",p1->age);
    return 0;
}
