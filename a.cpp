#include <stdio.h>
#include <math.h>

// Hàm in dãy nhị phân của một số
void printBinary(int num, int n) {
    for (int i = n - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1); // In lần lượt từng bit
    }
    printf("\n");
}

int main() {
    int n;

    // Nhập giá trị n
    printf("Nhập n: ");
    scanf("%d", &n);

    int total = pow(2, n); // Tổng số dãy nhị phân cần in (2^n)

    printf("Tất cả %d dãy nhị phân có độ dài %d là:\n", total, n);
    for (int i = 0; i < total; i++) {
        printBinary(i, n); // In dãy nhị phân của số i
    }

    return 0;
}
