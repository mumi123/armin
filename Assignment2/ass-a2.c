#include <stdio.h>
#include <stdint.h>
#include <stdbool.h> 

bool isPrime(int n);
unsigned int countPrimes(uint32_t element_list[], unsigned int elements);

int main()
{   
    uint32_t arrOfNumbers[] = { 1, 3, 4, 5, 6, 7, 9 };
    unsigned int elements = 7;

    countPrimes(arrOfNumbers, elements);
    return 0;
}

unsigned int countPrimes(uint32_t element_list[], unsigned int elements)
{
    int counterOfPrimes = 0;

	for (int i = 0; i < elements; i++)
    { 
        if (isPrime(element_list[i]))
        {
            counterOfPrimes++;
        }
    }
	return counterOfPrimes;
}

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }

    for(int i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}