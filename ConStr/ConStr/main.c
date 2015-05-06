//
//  main.c
//  ConStr
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    
    char buf[100];
    memset(buf,0,sizeof(buf));
    
    sprintf(buf,"Hello %d,%f,%s",100,1.2,"jack");
    puts(buf);
    return 0;
}
