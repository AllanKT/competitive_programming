#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int a, b, c, MaiorAB, MaiorC;

    cin >> a >> b >> c;

    MaiorAB = (a + b + abs(a-b)) / 2;

    MaiorC = (MaiorAB + c + abs(MaiorAB-c)) / 2;

    cout << MaiorC << " eh o maior" << endl;

    return 0;
}
