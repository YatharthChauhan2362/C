#include <stdio.h> 
  
int main() 
{  
    int n1 = 5, n2 = 10, n3 = 15, n4 = 20, max; 
       
    max = (n1 > n2 && n1 > n3 && n1 > n4) ? n1 : ((n2 > n3 && n2 > n4) ?  n2 : (n3 > n4 ? n3 : n4)); 
                                                          
    printf("Largest number among %d, %d, %d and %d is %d.", n1, n2, n3, n4, max); 
   
} 