#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio();
    cin.tie();
    long long x;
    if(argc > 1){
        string str = argv[1];
        x = stoi(str);
    }
    else cin>> x;
    x++;
    for(long long i = 1; i < x; i++){
        if((x - 1) % i == 0){
            printf("%I64d x %I64d\n", i, (x-1)/i);
        }
    }
    return 0;
}
