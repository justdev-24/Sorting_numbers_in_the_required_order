#include <stdio.h>

int main(){
    int n;
    int m = 1;
    printf("Son kiriting: ");
    scanf("%d", &n);
    for(int j = 0; j < n; j++){
        for(int i = 0; i < m; i++){
            printf("%d ", i+1);
        }
        m++;
        printf("\n");
    }
    return 0;
}