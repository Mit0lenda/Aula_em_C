#include<stdio.h>
int main(){
    int matriz[4][4]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},matriz1[4][4]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},i,j,matriz2[4][4];
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            if (matriz[i][j]>=matriz1[i][j])
            {
                matriz2[i][j]=matriz[i][j];
            }
            if (matriz1[i][j]>=matriz[i][j])
            {
               matriz2[i][j]=matriz1[i][j];
            }
            printf(" %d ",matriz2[i][j]);
        }
        
    }
    
}