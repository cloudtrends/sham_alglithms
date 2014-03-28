//
//  circular_buffer_one.h
//  cstudybasic
//
//  Created by cloud on 14-3-28.
//  Copyright (c) 2014年 cloud. All rights reserved.
//

#ifndef cstudybasic_circular_buffer_one_h
#define cstudybasic_circular_buffer_one_h





/* Opaque buffer element type.  This would be defined by the application. */
typedef struct { int value; } ElemType;


/* Circular buffer object */
typedef struct {
    int         size;   /* maximum number of elements           */
    int         start;  /* index of oldest element              */
    int         end;    /* index at which to write new element  */
    ElemType   *elems;  /* vector of elements                   */
} CircularBuffer;



void cbInit(CircularBuffer *cb, int size) ;
void cbFree(CircularBuffer *cb) ;
int cbIsFull(CircularBuffer *cb) ;
int cbIsEmpty(CircularBuffer *cb) ;
void cbWrite(CircularBuffer *cb, ElemType *elem) ;

void cbRead(CircularBuffer *cb, ElemType *elem) ;

#endif
