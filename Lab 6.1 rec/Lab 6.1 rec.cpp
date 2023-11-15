// Лабораторна робота № 6.1

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


void Init(int* a, int size, int i)
{
    a[i] = rand() % 91 - 40;
    if (i < size - 1)
        Init(a, size, i + 1);
}

int Count(int* a, int size, int i)
{
    if (i == size)
        return 0;
    if (!(a[i] > 0 && a[i] % 5 == 0))
    {
        return 1 + Count(a, size, i + 1);
    }
    else
    {
        return Count(a, size, i + 1);
    }
}

int Suma(int* a, int size, int i)
{
    if (i == size)
        return 0;
    if (!(a[i] > 0 && a[i] % 5 == 0))
    {
        return a[i] + Suma(a, size, i + 1);
    }
    else
    {
        return Suma(a, size, i + 1);
    }
}

void Zero(int* a, int size, int i)
{
    if (!(a[i] > 0 && a[i] % 5 == 0))
    {
        a[i] = 0;
    }
    if (i < size - 1)
        Zero(a, size, i + 1);
}

void Print(int* a, const int size, int i)
{
    cout << setw(4) << a[i];
    if (i < size - 1)
        Print(a, size, i + 1);
    else
        cout << endl;
}

int main()
{
    const int n = 22;
    int a[n];

    cout << "initialization:" << endl;
    Init(a, n, 0);

    cout << "Original array:" << endl;
    Print(a, n, 0);
    int k = Count(a, n, 0); cout << "Number of elemnts:" << k << endl;
    int s = Suma(a, n, 0); cout << "Sum of elements:" << s << endl;
    cout << "Zero array;" << endl;
    Zero(a, n, 0);
    cout << "Modified:" << endl;
    Print(a, n, 0);

    return 0;
}