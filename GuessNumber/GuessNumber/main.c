//
//  main.c
//  GuessNumber
//
//  Created by pandazheng on 15/5/4.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    int oldprice = 0,price = 0,i = 0;
    printf("系统正在自动设置商品的价格......\n");
    for(i = 5 ; i >= 0 ; i--)
    {
        printf("%d\n",i);
        oldprice += (10 * (i+1) + (i+1) * (i+1) * 10);
    }
    //printf("%d\n",oldprice);
    printf("商品价格已设置完成......\n");
    printf("请输入试猜的价格\n");
    while(oldprice != price)
    {
        i++;
        printf("参与者:");
        scanf("%d",&price);
        if (price > oldprice)
        {
            printf("高了\n");
        }
        else if (price < oldprice)
        {
            printf("低了\n");
        }
        else
        {
            printf("恭喜你，答对了,该商品属于你了!\n\n你一共猜了%d次",i);
        }
    }
    getchar();
    return 0;
}
