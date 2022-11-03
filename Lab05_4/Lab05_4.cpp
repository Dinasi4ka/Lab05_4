// Lab05_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

double S0(const int N,const int l)
{
    double s = 0;
    for (int k = N; k <= l; k++)
        s += sqrt(pow(sin(k), 2) + pow(cos(N*1. / k), 2));
    return s;
}
double S1(const int N, const int l, const int k)
{
    if (k > l)
        return 0;
    else
        return sqrt(pow(sin(k), 2) + pow(cos(N * 1. / k), 2)) + S1( N, l, k + 1);
}
double S2(const int N, const int l,const int k)
{
    if (k < N)
        return 0;
    else
        return sqrt(pow(sin(k), 2) + pow(cos(N * 1. / k), 2)) + S2( N,l, k - 1);
}
double S3( const int N, const int l,const int k, double t)
{
    t = t + sqrt(pow(sin(k), 2) + pow(cos(N * 1. / k), 2));
    if (k >= l)
        return t;
    else
        return S3( N,l, k + 1, t);
}
double S4( const int N, const int l,const int k, double t)
{
    t = t + sqrt(pow(sin(k), 2) + pow(cos(N * 1. / k), 2));
    if (k <= N)
        return t;
    else
        return S4( N, l,k - 1, t);
}
int main()
{
    int N;
    const int l = 19;

    cout << "N = "; cin >> N;

    cout << "(iter) S0 = " << S0(N,l) << endl;
    cout << "(rec up ++) S1 = " << S1(N, l, N) << endl;
    cout << "(rec up --) S2 = " << S2(N, l, l) << endl;
    cout << "(rec down ++) S3 = " << S3(N, l, N, 0) << endl;
    cout << "(rec down --) S4 = " << S4(N, l, l, 0) << endl;

    return 0;
}

