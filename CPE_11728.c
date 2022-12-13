#include <stdio.h>

int main(){
 
    int S, sum, times = 1, isFound;
    scanf("%d", &S);
    while (S != 0){
        isFound = 0;
        for (int i = S; i > 0; i--) {
            sum = 0;
            for (int j = i; j > 0; j--) {
                if (i % j == 0){
                    sum += j;
                }
            }
            if (sum == S){
                isFound = 1;
                printf("Case %d: %d\n",times++, i);
                break;
            }
        }
        if (isFound == 0){
            printf("Case %d: %d\n",times++, -1);
        }
        scanf("%d", &S);
    }
}
