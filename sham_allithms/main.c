//
//  main.c
//  cstudybasic
//
//  Created by cloud on 14-3-1.
//  Copyright (c) 2014年 cloud. All rights reserved.
//

#include <stdio.h>
#include "struct_study.h"

#include "variables.h"

#include "variables_b.h"
#include "variables_c.h"

#include "mis_test.h"


#include "array_test.h"


#define ABC   "abc\n"
#            define DEF   "DEF\n"
#            define eprintf(...) fprintf (stderr, __VA_ARGS__)
#            define eprintf_pro(args...) fprintf (stderr, args)

int average_basic(int num, int a,int b,int c);




int main__________________001(int argc, const char * argv[])
{

    
    
    average_basic(1,2,3,4);
    //average_basic(1,2,3);

    printf(ABC);
    eprintf("a"    DEF    ABC );
    eprintf_pro("a"    DEF    ABC );

    
    eprintf(DEF);
    // insert code here...
    
    
    
    print_struct();
    
    int gloabl_int_a=1;
    printf("global int a is :%d \n.", gloabl_int_a);
    
    //printf("global int a is :%d \n.", gloabl_int_a);
    
    
    test_interview_one();
    
    printf("Hello, World!\n");
    
    
    
    
    
    return 0;
}




int average_basic(int num, int a,int b,int c){
    return 0;
}










//--- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
int test_integer() ;

int main(int argc, char **argv) {

    
    printf("--- --- --- below is test interger--- --- --- \n");
    //test_integer();
    
    
    //array_test_init();
    
    return 0;
}



















