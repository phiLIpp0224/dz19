#include <stdio.h>
#include <stdlib.h> 
int main()
{
    int qwe; // size of Per
    printf ("ВВЕДИТЕ ДЛИНУ:");
    scanf ("%d", &qwe);
    
    int* a = (int*)malloc(qwe * sizeof(int));
     int* b = (int*)malloc(qwe * sizeof(int));
      int* c = (int*)malloc(qwe * sizeof(int)); // result Mult
       int* d = (int*)malloc(qwe * sizeof(int)); //  result Del
        
        printf ("ВВЕДИТЕ  A: ");
        for (int i = 0; i < qwe; i++) 
        {
        int Ai;
        scanf ("%d", &Ai);
        a[i] = Ai;
          }
    
        printf ("ВВЕДИТЕ В: ");
        for (int i = 0; i < qwe; i++) 
        {
        int Bi;
         scanf ("%d", &Bi);
          b[i] = Bi;
          }
           for (int i = 0; i < qwe; i++) 
            {
             c[i] = b[a[i] - 1];
              }
              
    
    printf ("А /х/ В: ");
    
    
    for (int i = 0; i < qwe; i++) 
    {
         int Ci;
          Ci = d[i];
           printf ("%d ", Ci);
     }
    return 0;
}
