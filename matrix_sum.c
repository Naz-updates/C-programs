#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
    printf("ENTER THE ROWS AND COLUMNS OF THE FIRST MATRIX \n");
    scanf("%d%d",&m,&n);
    printf("ENTER THE ROWS AND COLUMNS OF THE SECOND MATRIX \n");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("ENTER THE ELEMENTS OF FIRST MATRIX \n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("ENTER THE ELEMENTS OF SECOND MATRIX \n");
        for(i=0; i<p; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                c[i][j]=0;
                for(k=0; k<n; k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        printf("THE MULTIPLIED MATRIX IS\n");
        for(i=0; i<m; i++)
        {
            for(j=0; j<q; j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else 
    {
        printf("MATRIX OPERATION IS NOT POSSIBLE\n");
    }
}