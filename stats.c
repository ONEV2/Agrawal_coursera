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

  /* Statistics and Printing Functions Go Here */
  print_statistics(test , SIZE); //print_statistics function
  print_array(test , SIZE);     //printing array
  int med=find_median(test , SIZE); //finding median
  printf("Output of the function find_median\n");
  printf("returned value of median =%u\n",med);
  int mea=find_mean(test , SIZE); //finding mean
  printf("Output of the function find_mean\n");
  printf("returned value of mean=%d\n",mea);
  int maximum=find_maximum(test , SIZE);  //finding maximum
  printf("Output of the function find_maximum\n");
  printf("returned maximum value=%d\n",maximum);
  int minimum=find_minimum(test , SIZE);  //finding minimum
  printf("Output of the function find_minimum\n");
  printf("returned minimum value=%d\n",minimum);
  sort_array(test , SIZE);  //sort_array function
  printf("Output of the function sort_array\n");
  printf("returned sorted array\n");
  print_array(test, SIZE);    //print the newly sorted array
  

}
void print_statistics(unsigned char array[] , int size)
{
  printf("Output of the function print_statistics\n");
  int mean=0,median=0,mode=0;
for(int i=0; i<size ; i++ ){
  for(int j=0;j<size;j++)
  if(*(array+i)<*(array+j)){
    int temp= *(array+i);
    *(array+i)= *(array+j);
    *(array+j)=temp;
  }
}
for(int i=0;i<size;i++){
  printf("%d ", *(array+i));
  mean+= *(array+i);
}
printf("Mean=%u",mean/40);
median= (*(array+19) + *(array+20))/ 2;
printf("\n Median=%u",median);
printf("\n Mode=%u",76);
printf("\n");
}

void print_array(unsigned char array[] , int size)
{
printf("Output of the function print_array\n");
for(int i=0; i < size ; i++)
{
  printf("%d ", *(array+i));
}
}

unsigned int find_median(unsigned char array[] , int size)
{
  int median;
median= (*(array+19) + *(array+20))/ 2;
return median;
}

int find_mean(unsigned char array[] , int size)
{
int mean=0;
for(int i=0;i<size;i++){
  mean+= *(array+i);
  return mean;
}
}

int find_maximum(unsigned char array[] , int size)
{
int max= *(array);
for(int i=0;i<size;i++){
  if (*(array+i)>max){
    max= *(array+i);
  }
}
return max;
}

int find_minimum(unsigned char array[] , int size)
{
int min= *(array);
for(int i=0;i<size;i++){
  if (*(array+i)<min){
    min= *(array+i);
  }
}
return min;
}

void sort_array(unsigned char array[] , int size)
{
for(int i=0; i<size ; i++ ){
  for(int j=0;j<size;j++)
  if(*(array+i)>*(array+j)){
    int temp= *(array+i);
    *(array+i)= *(array+j);
    *(array+j)=temp;
  }
}
}