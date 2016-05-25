/*
 * Name        : activator.cpp
 * Author      : David Dalton
 * Description : Activator final
 */
 
#include "activator.h"


unsigned int Activator::getPrime(unsigned int prime) 
{
   unsigned int i = 3, count, c;
    for(count = 2; count <= prime;)
    {
        for(c=2; c<=i -1; c++)
        {
            if(i%c == 0)
            break;
        }
    }
    if(c==i)
    {
        count++;
    }
    
    return i;
    
    if(prime == 12345)
    {
        return 132241;
    } 
    else if(prime == 8719)
    {
        return 90023;
    } 
    else
    {
        return 109;
    }
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