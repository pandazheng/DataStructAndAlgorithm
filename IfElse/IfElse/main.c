//
//  main.c
//  IfElse
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

void test(int score)
{
    if (score < 60)
    {
        printf("不及格\n");
    }
    else if(score >= 60 && score < 80)
    {
        printf("一般\n");
    }
    else if(score >= 80 && score < 100)
    {
        printf("优秀\n");
    }
    else
    {
        printf("特别优秀\n");
    }
}

void test1(int score)
{
    switch(score/10)
    {
        case 12:
            printf("特别优秀\n");
            break;
        case 10:
            printf("优秀\n");
            break;
        case 9:
        case 8:
            printf("一般\n");
            break;
        case 7:
        case 6:
            printf("及格\n");
            break;
        case 5:
            printf("不及格\n");
            break;
        default:
            printf("分数有错误\n");
    }
}

int main(int argc, const char * argv[]) {
    
    test(124);
    test1(50);
    test1(60);
    test1(70);
    test1(90);
    test1(100);
    test1(120);
    return 0;
}
