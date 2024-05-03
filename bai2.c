#include <stdio.h>
#include <math.h>


int main() {
    int n=100;
    printf("Cac so chinh phuong nho hon %d la:\n", n);
    
    for (int i = 1; i < n; i++) {
        int a= sqrt(i);
        if(a*a==i)
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
