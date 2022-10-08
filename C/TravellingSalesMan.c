#include<stdio.h>
#include<stdio.h>
#define INF 9999
#define MAX 50

int TSP(int m[MAX][MAX], int S, int pos, int n) {
    int ans = INF ;
    if(S == ((1 << n) - 1))
        return m[pos][0] ;
    for(int ch=0 ; ch < n ; ch++) {
            if((S & (1 << ch)) == 0) {
                int t = m[pos][ch] + TSP(m, S | (1<<ch) , ch,n) ;
                if(ans > t)
                    ans = t ;

            }
    }
    return ans;
}
void main(){
    int n,arr[MAX][MAX];
    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    printf("Enter the matrix:\n");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&(arr[i][j]));

    int cost= TSP(arr,1,0,n) ;
    printf("Shortest distance: 
    
    %d", cost) ;
}
