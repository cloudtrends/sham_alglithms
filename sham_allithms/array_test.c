//
//  array_test.c
//  cstudybasic
//
//  Created by cloud on 14-3-28.
//  Copyright (c) 2014年 cloud. All rights reserved.
//

#include <stdio.h>
#include "array_test.h"

//extern short array_test_a[];

//short array_test_a[20] = {1,2,3};

void array_test_init(){
    //array_test_a = {1,2,3};
    
    for(int i=0;i<10;i++){
        array_test_a[i] = 1;
    }
    
    for(int i=0;i<10;i++){
        array_test_a[i] = i+10;
    }
  
    //
    array_test_pa = array_test_a;
    array_test_px = &array_test_a;
    
    printf("a:%p; pa:%p; px:%p\n", array_test_a, array_test_pa, array_test_px);
    
    printf("a[1]:%i; pa[1]:%i (*px)[1]:%i\n", array_test_a[1], array_test_pa[1], (*array_test_px)[1]);
    
    for(int j = 0 ;j < 20 ;j++){
        printf("a %d = %d\n", j , array_test_a[j]);
    }
}


