//
//  main.c
//  HelloC
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hell C");
    
    
    for (int i = 0 ; i < argc ; i++)
    {
        printf("%s\n",argv[i]);
    }
    return 0;
}
