//
//  main.c
//  OOC
//
//  Created by pandazheng on 15/5/6.
//  Copyright (c) 2015年 pandazheng. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//typedef struct
//{
//    int age;
//    void (*sayHello)();
//}People;
//
//People* PeopleCreate()
//{
//    return malloc(sizeof(People));
//}
//
//void PeopleDelete(People *p)
//{
//    free(p);
//}
//
//void PeopleSayHello()
//{
//    printf("Hello\n");
//}
//
//
//
//People* PeopleInit(People *p,int age)
//{
//    p->age = age;
//    p->sayHello = PeopleSayHello;
//    return p;
//}
//
//int main(int argc, const char * argv[]) {
//    
//    People *p = PeopleInit(PeopleCreate(), 20);
//    printf("Hello,%d\n",p->age);
//    p->sayHello();
//    PeopleDelete(p);
//    return 0;
//}

//Object Begin<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

#define ObjectField void (*onDelete)(void*);

typedef struct Object
{
    ObjectField
}Object;

#define ObjectCreate(TYPE) malloc(sizeof(TYPE))
#define ObjectDelete(obj) {obj->onDelete(obj); free(obj);}

void ObjectOnDelete(void *obj)
{
    printf("Object on delete\n");
}

Object* ObjectInit(Object *obj)
{
    obj->onDelete = ObjectOnDelete;
    return obj;
}

//Object Begin<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

typedef struct
{
    ObjectField
    int age;
    void (*sayHello)();
}People;

void PeopleSayHello()
{
    printf("Hello\n");
}

void PeopleOnDelete(void *p)
{
    ObjectOnDelete(p);
    
    printf("People on delete\n");
}

People* PeopleInit(People *p,int age)
{
    ObjectInit((Object*)p);
    
    p->age = age;
    p->sayHello = PeopleSayHello;
    p->onDelete = PeopleOnDelete;
    return p;
}

int main(int argc,char** argv)
{
    People *p = PeopleInit(ObjectCreate(People), 20);
    p->sayHello();
    ObjectDelete(p);
    
    return 0;
}


