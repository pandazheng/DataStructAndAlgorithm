//
//  main.c
//  FuncPointer
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

void SayHello()
{
    printf("hello world\n");
}

int main(int argc, const char * argv[]) {
    
    
    //SayHello();
    
    
    void (*p)();
    p = SayHello;
    
    p();
    return 0;
}
