#include <iostream>

int sum(int a, int b);
void oddEven(int i);
int power(int b, int e);
bool prime(int i);
int findValueInArray(int A[], int l, int v);
void bubbleSort(int A[], int l);
int GCD(int i, int j);
int LCM(int i, int j);

int main()
{    
    int x = 8;
    int y = 236732982634;
    int l = LCM(x, y);
    int g = GCD(x, y);
    if (l * g == x * y)
        std::cout << "klopt";
    else
        std::cout << "Klopt niet";
    std::cout << LCM(8,2);
    std::cout << LCM(3, 5);

}

//Lecture 1
//1
int sum(int a, int b) {
    return a + b;
}

//2
void oddEven(int i) {
    if (i % 2 == 0)
        std::cout << "even" << std::endl;
    else
        std::cout << "uneven" << std::endl;
}

//3
int power(int b, int e) {
    if (e > 0)
        return b * power(b, e - 1);
    else if (e == 0)
        return 1;    
}

//4
bool prime(int i) {
    if (i < 2)
        return false;
    int max = i / 2;
    for (int c = 2;c <= max;c++) {
        if (i % c == 0) {
            return false;
        }
    }
    return true;
}

//5
int findValueInArray(int A[], int l, int v) {
    for (int i = 0;i < l;i++)
        if (A[i] == v)
            return i;
    return -1;
}

//6
void bubbleSort(int A[], int l) {
    //int pos = 0;
    bool unsorted = false;
    for(int pos = 1; pos<l;pos++)
        if (A[pos - 1] > A[pos]) {
            int i = A[pos];
            A[pos] = A[pos - 1];
            A[pos - 1] = i;
            unsorted = true;
        }
    if (unsorted)
        bubbleSort(A, l);
}

//7
int GCD(int i, int j) {
    if (j == 0)
        return i;
    else
        return GCD(j, i % j);
}

//8
int LCM(int i, int j) {
    int increment;
    int lcm;
    if (i > j) {
        lcm = i;
        increment = i;
        
    }
    else {
        lcm = j;
        increment = j;
    }
    while (lcm % i != 0 || lcm % j != 0) {
        lcm += increment;
    }
    return lcm;
}