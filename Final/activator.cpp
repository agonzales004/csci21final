/*
 * Name        : activator.cpp
 * Author      : David Dalton
 * Description : Activator final
 */
 
#include "activator.h"


unsigned int Activator::getPrime(unsigned int prime) 
{
   
}

unsigned int Activator::sumTheDigits(unsigned int value) 
{
    unsigned int sum = 0;
    while (value > 0)
    {
        sum = sum + (value%10);
        value = value/10;
    }
    if(sum > 9)
    {
        sum = sumTheDigits(sum);
    }
    
    return sum;
}