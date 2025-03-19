#include<stdio.h>
#include<stdlib.h>
#include "functions.h"

double avg(double array[], int size)
{
	double avg_num = 0;

	if (size == 0)
	    {
	        return 0;
	    }

	for(int i = 0; i < size; i++)
	{
		avg_num += array[i]/size;
	}
	return avg_num;
}

double max(double array[], int size)
{
    double max_num;

    if (size == 0)
    {
        return 0;
    }

    max_num = array[0];

    for (int i = 1; i < size; i++)
    {
        if (array[i] > max_num)
        {
            max_num = array[i];
        }
    }

    return max_num;
}
