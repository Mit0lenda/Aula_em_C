#include <stdio.h>
//Desenho 
int main()
{
  int n=5;
  for(int linha=0;linha<n;linha++)
  {
    for (int coluna=0;coluna < n; coluna++)
    {
      if ((linha==0||linha==n-1)||(coluna==0||coluna==n-1))
      {
        printf(" *");
        
      }
      else
        printf("  ");
    }
    printf("\n");
  }
}
