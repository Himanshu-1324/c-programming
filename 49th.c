#include <stdio.h>


void printNumber(int n) {
    printf("%d ", n);
}


void recursiveCallback(int n, void (*callback)(int)) {
    if (n == 0) return;
    callback(n);
    recursiveCallback(n - 1, callback);
}

int main() {
    recursiveCallback(5, printNumber);
    return 0;
}