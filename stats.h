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
 * @file stats.h 
 * @brief Contains descriptions of each functions used in stats.c program
 *
 * <Add Extended Description Here>
 *
 * @author Sachinkumar Dubey
 * @date 27 June 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * @param Arr - Array for which the statistics are to be printed.
 * @param N - Denotes the size of the input array.
 * @return return nothing, just prints the various statistics.
 */
void print_statistics(unsigned char *arr,int N);

/**
 * @brief Given an array of data and a length, prints the array to the screen.
 * @param Arr - Array for which the statistics are to be printed.
 * @param N - Denotes the size of the input array.
 * @return Return nothing, just prints the array.
 */
void print_array(unsigned char *arr,int N);

/**
 * @brief Given an array of data and a length, returns the median value.
 * @param Arr - Array for which the statistics are to be printed.
 * @param N - Denotes the size of the input array.
 * @return returns the median of the array which is a float value.
 */
float find_median(unsigned char *arr,int N);

/**
 * @brief Given an array of data and a length, returns the mean value.
 * @param Arr - Array for which the statistics are to be printed.
 * @param N - Denotes the size of the input array.
 * @return returns the mean of the array which is a float value.
 */
float find_mean(unsigned char *arr,int N);

/**
 * @brief Given an array of data and a length, returns the maximum value.
 * @param Arr - Array for which the statistics are to be printed.
 * @param N - Denotes the size of the input array.
 * @return returns the maximum value of the array which is a int value.
 */
int find_maximum(unsigned char *arr,int N);

/**
 * @brief Given an array of data and a length, returns the minimum value.
 * @param Arr - Array for which the statistics are to be printed.
 * @param N - Denotes the size of the input array.
 * @return returns the minimum value of the array which is a int value.
 */
int find_minimum(unsigned char *arr, int N);

/**
 * @brief Given an array of data and a length, sorts the array from largest to smallest.  
 * (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 * @param Arr - Array for which the statistics are to be printed.
 * @param N - Denotes the size of the input array.
 * @return return nothing, Just sorts the given array from largest to smallest.
 */
void sort_array(unsigned char *arr,int N);

#endif /* __STATS_H__ */
