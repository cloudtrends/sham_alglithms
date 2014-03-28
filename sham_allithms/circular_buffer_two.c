//
//  circular_buffer_two.c
//  cstudybasic
//
//  Created by cloud on 14-3-28.
//  Copyright (c) 2014年 cloud. All rights reserved.
//

#include <stdio.h>


/* Circular buffer example, keeps one slot open */

#include <stdlib.h>

#include "circular_buffer_one.h"


void cbInit(CircularBuffer *cb, int size) {
    cb->size  = size + 1; /* include empty elem */
    cb->start = 0;
    cb->end   = 0;
    cb->elems = (ElemType *)calloc(cb->size, sizeof(ElemType));
}

void cbFree(CircularBuffer *cb) {
    free(cb->elems); /* OK if null */
}

int cbIsFull(CircularBuffer *cb) {
    return (cb->end + 1) % cb->size == cb->start;
}

int cbIsEmpty(CircularBuffer *cb) {
    return cb->end == cb->start;
}

/* Write an element, overwriting oldest element if buffer is full. App can
 choose to avoid the overwrite by checking cbIsFull(). */
void cbWrite(CircularBuffer *cb, ElemType *elem) {
    cb->elems[cb->end] = *elem;
    cb->end = (cb->end + 1) % cb->size;
    if (cb->end == cb->start)
        cb->start = (cb->start + 1) % cb->size; /* full, overwrite */
}

/* Read oldest element. App must ensure !cbIsEmpty() first. */
void cbRead(CircularBuffer *cb, ElemType *elem) {
    *elem = cb->elems[cb->start];
    cb->start = (cb->start + 1) % cb->size;
}



void cb_test(){
    
    CircularBuffer cb;
    ElemType elem = {0};
    
    int testBufferSize = 10; /* arbitrary size */
    cbInit(&cb, testBufferSize);
    
    /* Fill buffer with test elements 3 times */
    for (elem.value = 0; elem.value < 5 * testBufferSize; ++ elem.value){
        cbWrite(&cb, &elem);
        
        
    }
    printf("--- --- --- --- --- --- --- --- --- --- --- \n");
    /* Remove and print all elements */
    while (!cbIsEmpty(&cb)) {
        cbRead(&cb, &elem);
        printf("%d\n", elem.value);
    }
    
    cbFree(&cb);
    
}


