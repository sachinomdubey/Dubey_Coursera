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
  * @brief This a program file to compute the stats of a given array.
  *
  * Stats such as mean, median, max and min of the given array is calculated using user-defined
  * fucntions and then printed on the output screen.
  *
  * @author Sachinkumar Dubey
  * @date 27 June 2021
  *
  */


#include <stdio.h>
#include "stats.h"

  /* Size of the Data Set */
#define SIZE (40)

//Declaring the functions unsigned
void print_statistics(unsigned char* arr, int N);
void print_array(unsigned char* arr, int N);
float find_median(unsigned char* arr, int N);
float find_mean(unsigned char* arr, int N);
int find_maximum(unsigned char* arr, int N);
int find_minimum(unsigned char* arr, int N);
void sort_array(unsigned char* arr, int N);


void main() {

    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                114, 88,   45,  76, 123,  87,  25,  23,
                                200, 122, 150, 90,   92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                  7,  87, 250, 230,  99,   3, 100,  90 };

    /* Other Variable Declarations Go Here */
    /* Statistics and Printing Functions Go Here */
    printf("The given array is :");
    print_array(test, SIZE); //printing the given array
    print_statistics(test, SIZE); //printing the stats of given array
    sort_array(test, SIZE); //sorting the given array
    printf("The sorted array is :");
    print_array(test, SIZE); //printing the sorted array
}

void print_statistics(unsigned char* arr, int N)
{
    printf("Maximum = %d\nMinimum=%d\nMean=%0.3f\nMedian=%0.3f\n", find_maximum(arr, N), find_minimum(arr, N), find_mean(arr, N), find_median(arr, N));
}

void print_array(unsigned char arr[], int N)
{
    printf("\n[");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

float find_median(unsigned char* arr, int N)
{
    sort_array(arr, N);
    if (N % 2 == 0)
        return (arr[N / 2] + arr[N / 2 - 1]) / 2.0;
    else
        return arr[(N - 1) / 2];
}

float find_mean(unsigned char* arr, int N)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += arr[i];
    }
    return sum / (N * 1.0);
}

int find_maximum(unsigned char* arr, int N)
{
    sort_array(arr, N);
    return arr[0];
}

int find_minimum(unsigned char* arr, int N)
{
    sort_array(arr, N);
    return arr[N - 1];
}

void sort_array(unsigned char* arr, int N)
{
    int temp;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}

/* Add other Implementation File Code Here */
