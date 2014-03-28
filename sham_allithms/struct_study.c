//
//  struct_study.c
//  cstudybasic
//
//  Created by cloud on 14-3-6.
//  Copyright (c) 2014年 cloud. All rights reserved.
//

#include <stdio.h>

#include "struct_study.h"



void print_struct()
{
    struct student st3={
        
        .class  = 10,
        
        .name = "Mark", //Notice the equal to and the comma
        
        
        
        .roll  = 1038
        
    };
    
    
    
    printf( "name is %s .\n",  st3.name );
}