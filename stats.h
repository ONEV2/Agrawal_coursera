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
 * Functions that can analyze an array of unsigned char data items and report analytics on the maximum,minimum,mean and median of the data set.It also reorder this data set from large to small.After analysis and sorting it prints that data to the screen in nicely formatted presentation.
 *
 * @author Prakhar Agrawal
 * @date 20/05/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief prints the statistics of an array including minimum, maximum, mean, and median.
 *
 *  Takes array and length of array as input and prints statistics of an array including minimum,maximum, mean and median.
 *
 * @param array Input is array
 * @param size Input is length of array
 *
 * @return NULL
 */
void print_statistics(int array[] , int size);
 
/**
 *  @brief prints the array to the screen
 * 
 *  Takes array and length as input and prints array on the screen.
 *
 * @param array Input is array
 * @param size Input is length of array
  
 * @return NULL
 */
void print_array(int array[] , int size);

/**
 * @brief returns the median value
 * 
 * Given an array of data and a length, returns the median value.
 *
 * @param array Input is array
 * @param size Input is length of array 
 * 
 * @return integer
 */
void find_median(int array[] , int size); 

/**
 * @brief returns the mean
 * 
 * Given an array of data and a length, returns the mean
 * 
 * @param array Input is array
 * @param size Input is length of array
 *
 * @return integer
 */
int find_mean(int array[] , int size);

/**
 * @brief  returns the maximum
 * Given an array of data and a length, returns the maximum
 * 
 * @param array Input is array
 * @param size Input is length of array 
 * 
 * @return integer
 */
int find_maximum(int array[] , int size); 

/**
 * @brief returns the minimum
 * Given an array of data and a length, returns the minimum
 * 
 * @param array Input is array 
 * @param size Input is length of array
 * 
 * @return integer 
 */
int find_minimum(int array[] , int size);

/** 
 * @brief sorts the array from largest to smallest
 * Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 * 
 * @param array Input is array
 * @param size Input is length of array
 * 
 * @return NULL
*/
void sort_array(int array[] , int size);
#endif /* __STATS_H__ */
