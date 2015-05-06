//
//  main.c
//  RandNum
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    srand((int)time(NULL));
    int randNum = rand() % 100;
    
    printf("输入一个0到100的数值");
    
    int userInput;
    
    while(1)
    {
        scanf("%d",&userInput);
        
        if (userInput < randNum)
        {
            printf("数值过小\n");
        }
        else if(userInput > randNum)
        {
            printf("数值过大\n");
        }
        else
        {
            printf("正确\n");
            break;
        }
    }
    
    printf("exit");
    return 0;
}
