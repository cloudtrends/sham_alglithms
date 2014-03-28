//
//  mis_test.c
//  cstudybasic
//
//  Created by cloud on 14-3-28.
//  Copyright (c) 2014年 cloud. All rights reserved.
//

#include <stdio.h>



void test_interview_one(){
    int a[5]={1,2,3,4,5};
    int b_tmp=8;
    int c_tmp=9;
    int *ptr_a = a;
    printf("ptr a =%d \n",*(ptr_a +1  ));
    
    //--- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
    int *ptr=(int *)(&a+1);
    printf("ptr=%d \n",*(ptr ));
    printf("interview one: %d,%d \n",*(a+1),*(ptr-1));
}







int test_integer() {
    /**
     http://pfacka.binaryparadise.com/articles/guide-to-advanced-programming-in-C.html
     */
    long i = -1;
    
    if (i > sizeof(i)) {
        printf("OK\n");
    }
    else {
        printf("error\n");
    }
    
    return 0;
}



