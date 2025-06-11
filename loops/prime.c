#include <stdio.h>
#include <math.h>
/* The not_prime variable is initially false since it has a zero value, if the condition 
is satisfied it takes a non zero value which is always true in c.
*/ 

int main(){
    int n;
    scanf("%d", &n);
    int not_prime = 0; //not prime is false initially  
    if (n==0 || n==1){
        not_prime = 8;
    }
    else{

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0 && n!=2)
        {
            not_prime = 8 ;
            break;
        }
        
    }}
    if(not_prime){
        printf("%d is a composite number \n", n);
    }
    else{
        printf("%d is a prime number \n", n);
    }
    
    return 0;
}