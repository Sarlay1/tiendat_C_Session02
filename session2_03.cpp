#include <stdio.h>

int main() {
    // Khai bao và khai tao hai bien so nguyen
    int num1 = 5; // Bien so nguyen thu nhat
    int num2 = 15; // Bien so nguyen thu hai

    // Tinh tong, hieu, tich, thuong va luu vao cac bien khac
    int sum = num1 + num2;      // Tinh tong
    int difference = num1 - num2; // Tinh hieu
    int product = num1 * num2;    // Tinh tich
    float quotient = (float)num1 / num2; // Tinh thuong (ep kieu du co ket qua so thuc)

    // In ket qua ra man hinh
    printf("Tong cua %d và %d là: %d\n", num1, num2, sum);
    printf("Hieu cua %d và %d là: %d\n", num1, num2, difference);
    printf("Tich cua %d và %d là: %d\n", num1, num2, product);
    printf("Thuong cua %d và %d là: %.2f\n", num1, num2, quotient);

    return 0;
}
