#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    int palidrome=1;
    for(int i=0;i<n/2;i++) {
        if (arr[i]!=arr[n-1-i]) {
            palidrome=0;
            break;
        }
    }
    if (palidrome==1) {
        printf("Yes");
    }else {
        printf("No");
    }

    return 0;
}
