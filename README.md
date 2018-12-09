# pratikum07


# Latihan 1 (Program menukar nilai dari 2 buah variable)

```
-Mendeklarasikan nilai void tukar(int &a, int &b) sebagai rumus menukar nilai
-Mendekalarasikan variable int a,b; sebagai variable input
-Menukar nilai dengan kode: tukar(a,b);
-Menampilkan hasil nilai tukar kelayar dengan kode:  
    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;
    cout << endl;
    cout << "===SETELAH DITUKAR==="<< endl;
    cout << endl;

    tukar(a,b);

    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;

-Berikut kode lengkapnya:

#include <iostream>

using namespace std;

void tukar(int &a, int &b)
{
    a=10;
    b=20;
}
int main()
{
    int a,b;
    a=20;
    b=10;
    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;
    cout << endl;
    cout << "===>SETELAH DITUKAR<==="<< endl;
    cout << endl;

    tukar(a,b);

    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;

    return 0;
}
```

# Berikut Flowchart

![img](https://github.com/fahmieka21/pratikum07/blob/master/Flowchart1.png)

![img](https://github.com/fahmieka21/pratikum07/blob/master/Flowchart2.png)

# Hasil nya
![img](https://github.com/fahmieka21/pratikum07/blob/master/hasil1.png)

![img](https://github.com/fahmieka21/pratikum07/blob/master/hasil2.png)
