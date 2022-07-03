#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


set<int> getA(unsigned long long N, unsigned long long S, unsigned long long P, unsigned long long Q)
{
    set<int> a;

    a.insert(S);
    int next = S;
    for (int i = 1; i < N; i++)
    {
        next = (next * P + Q) % (unsigned long long)(pow(2, 32));
        a.insert(next);
    } 
    return a;
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    unsigned long long N, S, P, Q;
    cin >> N >> S >> P >> Q;

    cout << getA(N, S, P, Q).size() << endl;

    return 0;
}