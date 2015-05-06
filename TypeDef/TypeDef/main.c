//
//  main.c
//  TypeDef
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

typedef struct
{
    int age;
}People;

void sayHello()
{
    printf("Hello\n");
}

typedef void (*Func)();

int main(int argc, const char * argv[]) {
    
    Func f = sayHello;
    f();
    
    People p;
    p.age = 10;
    printf("age = %d\n",p.age);
    
    return 0;
}
