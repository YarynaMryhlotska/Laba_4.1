#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k, N, n;
    double P, A, B;

    n = 19;

    cout << "N = "; cin >> N;

    //while
    P = 1;
    k = N;
    while (k <= n)
    {
        A = k - N;
        B = k + N;
        P *= A / B + 1;
        k++;
    }
    cout << "while(...){...} = " << P << endl;

    //do-while
    P = 1;
    k = N;
    do {
        A = k - N;
        B = k + N;
        P *= A / B + 1;
        k++;
    } while (k <= n);
    cout << "do{...} while(...)" << P << endl;

    //for(...;...;k++)  
    P = 1;
    for (k = N; k <= n; k++)
    {
        A = k - N;
        B = k + N;
        P *= A / B + 1;
    }
    cout << "for(...;...;n++) {...} = " << P << endl;

    //for(...;...;k--)    
    P = 1;
    for (k = n; k >= N; k--)
    {
        A = k - N;
        B = k + N;
        P *= A / B + 1;
    }
    cout << "for(...;...;n---) {...} = " << P << endl;

    return 0;
}