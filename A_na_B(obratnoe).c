#include <stdio.h>
#include <stdlib.h> 

void RETUrnion (int qwe, int* a, int* res) 
{
   for (int i = 0; i < qwe; i++) res[a[i] - 1] = i;
    
   return;
}



int main()
{
    int qwe; 
    printf ("ВВЕДИТЕ ДЛИНУ :");
    scanf ("%d", &qwe);
    
    int* a = (int*)malloc(qwe * sizeof(int));
    int* res = (int*)malloc(qwe * sizeof(int));
    
    printf ("ВВЕДИТЕ ПЕРЕСТАНОВКУ: ");
     for (int i = 0; i < qwe; i++) 
     {
         int ai;
           scanf ("%d", &ai);
            a[i] = ai;
          }
    
    RETUrnion (qwe, a, res);
    
    printf ("\nОБРАТНОЕ ЗНАЧИНЕ: ");
    
    for (int i = 0; i < qwe; i++) 
    {
        int result;
          result = res[i] + 1;
           printf ("%d ", result);
          }
    
    
    return 0;
}
