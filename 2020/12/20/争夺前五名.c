#include <stdio.h>
 
int main(){
    int n,a[40];
    int i,j,temp;
    scanf("%d\n",&n);
    for (i = 0;i < n;i++){
        scanf("%d ",&a[i]);
    }
    for (i = 0;i < n;i++){
        for (j = i;j < n;j++){
            if (a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0;i < 5;i++)
        printf("%d ",a[i]);
}