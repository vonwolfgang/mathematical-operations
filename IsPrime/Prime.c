#include<stdio.h>
#include <stdbool.h>



int main(){
	
	IsPrime(10);
	
	
	return 0;
}


int IsPrime(int number){
	
	bool x = true;
	int i;
    for (i = 2; i < number; i++)
    {
        if (number%i==0)
        {
            x = false;
        } 

    }
    

    if (x == true)
    {
        printf("this number is prime %d", number);
    }
    
    else
    {
    	printf("this number is not prime %d", number);
    }
	
}
