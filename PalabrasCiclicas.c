#include <stdio.h>
#include <ctype.h>
#include <string.h>

int ContarCiclico(char String[], int size);

int casoDePrueba()
{
     char String[200];
     if (scanf("%s", String) == EOF)
          return 0;
     else
     {
          int n = strlen(String);
          int i;
          for (i = 0; i < n; i++)
          {
               String[i] = tolower(String[i]);
          }
          int resultado = ContarCiclico(String, n);
          printf("%d\n", resultado);
          return 1;
     }
}

int main()
{
     while (casoDePrueba())
     {
     }
     return 0;
}

int ContarCiclico(char String[], int size)
{
     int i;
     for (i = 1; i <= size / 2; i++)
     {
          if (size % i == 0)
          {
               int isCyclic = 1;
               int j;
               for (j = i; j < size; j++)
               {
                    if (String[j] != String[j - i])
                    {
                         isCyclic = 0;
                         break;
                    }
               }
               if (isCyclic)
               {
                    return i;
               }
          }
     }
     return size;
}
