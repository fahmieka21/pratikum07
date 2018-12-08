#include <iostream>

using namespace std;
int total;
void hitungan (){
total*= 3;
}
int main()
{
    total=2;
    total++;
    hitungan();
    cout << total << endl;
    return 0;
}
