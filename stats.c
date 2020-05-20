/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Functions that can analyze an array of unsigned char data items and report analytics on the maximum,minimum,mean and median of the data set.
 *
 *  Functions that can analyze an array of unsigned char data items and report analytics on the maximum,minimum,mean and median of the data set.It also reorder this data set from large to small.After analysis and sorting it prints that data to the screen in nicely formatted presentation.
 *
 * @author Prakhar Agrawal
 * @date 20/05/2020
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}
void print_statistics(int array[] , int size)
{

}

void print_array(int array[] , int size)
{

}

void find_median(int array[] , int size)
{

}

int find_mean(int array[] , int size)
{

}

int find_maximum(int array[] , int size)
{

}

int find_minimum(int array[] , int size)
{

}

void sort_array(int array[] , int size)
{

}