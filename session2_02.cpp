#include <stdio.h>

int main() {
    // Khai bao va khai tao hai bien so nguyen
    int number1 = 5; // Bien so nguyen thu nhat
    int number2 = 15; // Bien so nguyen thu hai

    // Tinh tong va luu vao mot bien khac
    int sum = number1 + number2;
    int difference = number1 - number2; // Tinh hieu
    int product = number1 * number2;    // Tinh tich
    float quotient = (float)number1 / number2; // Tinh thuong (ep kieu de c� ket qua so thuc)
    // In ket qua ra man hinh
    printf("Tong cua %d v� %d l�: %d\n", number1, number2, sum);
    printf("Hieu cua %d v� %d l�: %d\n", number1, number2, difference);
    printf("T�ch cua %d v� %d l�: %d\n", number1, number2, product);
    printf("Thuong cua %d v� %d l�: %.2f\n", number1, number2, quotient);

    return 0;
}
