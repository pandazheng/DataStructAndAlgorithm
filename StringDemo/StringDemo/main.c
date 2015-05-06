//
//  main.c
//  StringDemo
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

//几道面试题


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCHAR 256

void stringFilter(const char* pInputStr,long iInputLen,char* pOutputStr)
{
    char str[26] = {0};
    int i,j = 0;
    for (i = 0 ; i < iInputLen ; i++)
    {
        if (0 == str[pInputStr[i] - 'a'])
        {
            str[pInputStr[i] - 'a'] = 1;
            pOutputStr[j++] = pInputStr[i];
        }
    }
    pOutputStr[j] = '\0';
}

int main(int argc, const char * argv[]) {
    printf("-------------华为面试题---------------\n");
    char pInputStr[] = {"aaaabbbbccccdde"};
    char pOutputStr[MAXCHAR] = {0};
    unsigned long len = strlen(pInputStr);
    printf("pInputStr length : %ld\n",len);
    stringFilter(pInputStr,strlen(pInputStr),pOutputStr);
    puts(pOutputStr);
    return 0;
}
