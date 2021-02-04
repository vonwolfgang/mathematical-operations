


def IsPrime(number):
        
    x = True
    i=2

    for  i in range(i,number):
            
        if (number%i==0):
                
            x = False


    if (x == True):
            
        print(f"this number is prime -----> {number}")
            
    else:
    
        print(f"this number is not prime ----> {number}")
            
                 

IsPrime(10)            

            
        