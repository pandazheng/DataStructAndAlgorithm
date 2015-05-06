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


void stringZip(const char* pInputStr,long iInputLen,char* pOutputStr)
{
    int i,j,k,num;
    char buffer[20];
    for (i = 0 , k = 0 ; i < iInputLen ;)
    {
        num = 0;
        for (j = i + 1 ; j < iInputLen ; j++)
        {
            if (pInputStr[i] == pInputStr[j])
                ++num;
            else
                break;
        }
        
        if (0 != num)
        {
            memset(buffer,0,sizeof(buffer));
            sprintf(buffer,"%d",num+1);
            strcpy(pOutputStr+k,buffer);
            k += strlen(buffer);
        }
        pOutputStr[k++] = pInputStr[i];
        i = i + num + 1;
    }
    pOutputStr[k] = '\0';
}

void arithmetic(const char* pInputStr,long iInputLen,char* pOutputStr)
{
    int i,j,num_space;
    int add = 0,sub = 0;
    int num1,num2;
    int result = 0;
    char buffer[20];
    for (i = 0,num_space = 0; i < iInputLen ; i++)
    {
        if (pInputStr[i] == ' ')
            num_space++;
    }
    
    if (2 != num_space)
    {
        pOutputStr[0] = '0';
        pOutputStr[1] = '\0';
        return ;
    }
    
    num1 = 0;
    num2 = 0;
    for (i = 0 ; pInputStr[i] != ' ' ; i++)
    {
        if (pInputStr[i] >= '0' && pInputStr[i] <= '9')
            num1 = num1 * 10 + pInputStr[i] - '0';
        else
        {
            pOutputStr[0] = '0';
            pOutputStr[1] = '\0';
            return ;
        }
    }
    
    for (j = i + 1 ; pInputStr[j] != ' ' ; j++);
    if (1 != j - i - 1)
    {
        pOutputStr[0] = '0';
        pOutputStr[1] = '\0';
        return ;
    }
    else
    {
        if ('+' != pInputStr[i+1] && '-' != pInputStr[i+1])
        {
            pOutputStr[0] = '0';
            pOutputStr[1] = '\0';
            return ;
        }
        else
        {
            if ('+' == pInputStr[i+1])
                add = 1;
            if ('-' == pInputStr[i+1])
                sub = 1;
            
            for (i = j + 1 ; i < iInputLen ; i++)
            {
                if (pInputStr[i] >= '0' && pInputStr[j] <= '9')
                    num2 = num2 * 10 + pInputStr[i] - '0';
                else
                {
                    pOutputStr[0] = '0';
                    pOutputStr[1] = '\0';
                    return ;
                }
            }
            
            if (add == 1)
                result = num1 + num2;
            if (sub == 1)
                result = num1 - num2;
            
            memset(buffer,0,sizeof(buffer));
            sprintf(buffer,"%d",result);
            strcpy(pOutputStr,buffer);
        }
    }
}

int main(int argc, const char * argv[]) {
    printf("-------------华为面试题---------------\n");
    char pInputStr[] = {"aaaabbbbccccdde"};
    char pInputStr2[] = {"aaaacccccdddfeeeeeeggggaaaaeeeeffffff"};
    char pInputStr3[] = {"3 + 4"};
    char pOutputStr[MAXCHAR] = {0};
    char pOutputStr2[MAXCHAR] = {0};
    char pOutputStr3[MAXCHAR] = {0};
    unsigned long len = strlen(pInputStr);
    printf("pInputStr length : %ld\n",len);
    stringFilter(pInputStr,strlen(pInputStr),pOutputStr);
    stringZip(pInputStr2, strlen(pInputStr2), pOutputStr2);
    arithmetic(pInputStr3,strlen(pInputStr3),pOutputStr3);
    puts(pOutputStr);
    puts(pOutputStr2);
    puts(pOutputStr3);
    return 0;
}
