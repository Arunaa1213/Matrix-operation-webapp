//matrix multiplication 

#include<stdio.h>    
#include<stdlib.h>  
int main(){  
    int a[10][10] , b[10][10] , mul[10][10] , r ,c ,i ,j ,k;    
 
    printf("enter the number of row=");    
    scanf("%d",&r);    
    printf("enter the number of column=");    
    scanf("%d",&c);    
    printf("enter the first matrix element=\n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            scanf("%d",&a[i][j]);    
        }    
    }    
    printf("enter the second matrix element=\n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            scanf("%d",&b[i][j]);    
        }    
    }    
    
    printf("multiply of the matrix=\n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            mul[i][j]=0;    
            for(k=0;k<c;k++)    
            {    
                mul[i][j]+=a[i][k]*b[k][j];    
            }    
        }    
    }    
//for printing result    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            printf("%d\t",mul[i][j]);    
        }    
        printf("\n");    
    }    
return 0;  
}

/*output:
enter the number of rows=3
enter the number of column=3
enter the first matrix element= 1 2 3 4 5 6 7 8 9
enter the second matrix element=9 8 7 6 5 4 3 2 1
multiply of the matrix=
30      24      18
84      69      54
138     114     90
*/

