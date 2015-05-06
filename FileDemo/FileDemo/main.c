//
//  main.c
//  FileDemo
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
//    FILE *f = fopen("data.txt","w");
//    if (f != NULL)
//    {
//        for (int i = 0 ; i < 100 ; i++)
//        {
//            fprintf(f, "Hello %d\n",i);
//        }
//    }
//    fclose(f);
    FILE *f = fopen("data.txt","r");
    fseek(f,0,SEEK_END);
    long size = ftell(f);
    printf("file size = %ld\n",size);
    char buf[size + 1];
    fseek(f,0,SEEK_SET);
    fread(buf,sizeof(unsigned char),size,f);
    buf[size] = '\0';
    fclose(f);
    
    printf("%s",buf);
    return 0;
}
