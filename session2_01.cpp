#include <stdio.h>

int main(){
    // Kieu so nguyen, luu tru cac gia tri so nguyen
    int age = 18; // vi du: tuoi		
    // Kieu so thuc, luu tru cac gia tri thuc voi do chinh xac thap hon double 
    float height = 1.75; // vi du chieu cao: (m)
    // Kieu so thuc, luu tru cac gia tri thuc voi do chinh xac cao hon float 
    double pi = 3.14159265359; // vi du gia tri so pi
    // Kieu ki tu, luu tru mot ki tu
    char grade = 'A'; // vi du diem chu 
    // In cac gia tri ra man hinh de kiem tra
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    printf("Pi: %.10lf\n", pi);
    printf("Grade: %c\n", grade);
    return 0;
}

