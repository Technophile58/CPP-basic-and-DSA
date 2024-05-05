#include <iostream>
#include <cmath>
using namespace std;

int Binarytodec(int n)
{
   int dec = 0;
    int i = 0;

    // by bitwise operator
    while (n)
    {
        int bit = (n % 10);
        dec = dec+bit*pow(2,i++); // formula used for reversing any number
        
        n = (n/10);
    }
  return dec;
  }
int main()
{
    int n;
    cout << "Enter the number in binary :";
    cin >> n;
    int dec= Binarytodec(n);
    cout << "Decimal of " << n << " is :" << dec << endl;
    return 0;
}