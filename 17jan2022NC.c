#include<stdio.h>
void print1To10(int);
int main()
{
    int N=10;
    printf("\nNumbers 1-10 :: ");
    print1To10(N);
    return 0;
}
void print1To10(int N)
{
    if(N)
        print1To10(N- 1);
    else
        return;
    printf("\n%d\n", N);
}
#include <stdio.h>

static void recur_up (int n) {
    if (n > 1)
        recur_up (n - 1);
    printf ("%d\n", n);
}

static void recur_down (int n) {
    printf ("%d\n", n);
    if (n > 1)
        recur_down (n - 1);
}

int main (void) {
    recur_up (10);
    recur_down (10);
    return 0;
}
#include <stdio.h>

static void recur_down (int n) {
    printf ("%d\n", n);
    if (n > 1)
        recur_down (n - 2);
}

int main (void) {
    
    recur_down (10);
    return 0;
}
#include <stdio.h>
int addNumbers(int n);
int main() {
    int num=10;
    printf("Sum = %d", addNumbers(num));
    return 0;
}

int addNumbers(int n) {
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}