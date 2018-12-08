#include <iostream>

using namespace std;
int kali (int m, int n)
{
    int i,hasil=0;
    for(i=1;i<=n;i++)
        hasil+=m;
    if (n<0)
        {
        return(-hasil);
        }
    else
        {
        return(hasil);
        }
}
int main()
{
    int a,b;
    cout<<"Masukin Bilangan :";
    cin>> a;
    cout<<"Masukin Bilangan :";
    cin>> b;
    cout << "\n\nHasil Dari " << a <<" X "<< b <<" = "<<kali(a,b);
    return 0;
}
