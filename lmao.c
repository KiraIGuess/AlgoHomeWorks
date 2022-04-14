#include <stdio.h>

int main(){


    int Matrix[4][5] = { {1,-3,4, 0 ,9} , {0,-9,7, 10,11} , {2, 5,8,-11,45} , {7, 4,12,-6,-5} };
    int sum[]={0,0,0,0,0},big[2],small[2],i,j,temp;

    // printing the original Matrix
    printf("Original Matrix : \n");
    for(i=0;i<4;i++){
            printf("{ ") ;
            for(j=0;j<5;j++){
                printf("%d, ",Matrix[i][j]);
            }
            printf("}\n") ;
    }

    // Adding the sum of all columns to an array
    for(j=0;j<5;j++){
            for(i=0;i<4;i++){
                sum[j]+=Matrix[i][j];
            }
    }

    // initial value from the sum array to not get an error
    big[0]=small[0]=sum[0];

    // getting the the smallest and biggest column with their indexes
    for(i=0;i<5;i++){

        if(sum[i]>big[0]){
            big[0]=sum[i];
            big[1]=i;
        }
        else{
            small[0]=sum[i];
            small[1]=i;
        }
    }

    // Swapping the values
    for(i=0;i<5;i++){
        temp=Matrix[i][big[1]];
        Matrix[i][big[1]]=Matrix[i][small[1]];
        Matrix[i][small[1]]=temp;

    }

    // Printing the Updated Matrix
    printf("After the change : \n");
    for(i=0;i<4;i++){
            printf("{ ") ;
            for(j=0;j<5;j++){
                printf("%d, ",Matrix[i][j]);
            }
            printf("}\n") ;
    }
    /*
    We Could also insert in line 7 this :

    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int Matrix[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
                scanf("%d",&Matrix[i][j]);
        }

    }
    and we just replace in the code by n and m instead of 4 and 5


    */

return 0;

}
