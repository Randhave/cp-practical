
#include <bits/stdc++.h>
using namespace std;

// function to check if a number is prime or not
int isPrime(int x)
{

    int s = sqrt(x);

    for (int i = 2; i <= s; i++)

        if (x % i == 0)
            return 0;

    return 1;
}

void Num(int x, int &a, int &b)
{

    for (int i = 2; i <= x / 2; i++)
    {

        if (isPrime(i) && isPrime(x - i))
        {
            a = i;
            b = x - i;
            return;
        }
    }
}

// function to generate 4 prime numbers adding upto n
void generate(int n)
{

    if (n <= 7)
        cout << "Impossible to form" << endl;

    int a, b;

    if (n % 2 != 0)
    {
        Num(n - 5, a, b);
        cout << "2 3 " << a << " " << b << endl;
    }
    else
    {
        Num(n - 4, a, b);
        cout << "2 2 " << a << " " << b << endl;
    }
}

// driver program to test the above function
int main()
{
    int n = 28;
    generate(n);
    return 0;
}
