#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
   //1
    int n;
    cout << "Input number:";
    cin >> n;

    bool nsign = n < 0;
    n = n < 0 ? -n : n;
   
    vector<int> digits;
    while (n != 0) {
        int d = n % 10;
        digits.push_back(d);
        n = n / 10;
    }
   
    auto max_iter = max_element(digits.begin(), digits.end());
    auto maxd = digits[distance(digits.begin(), max_iter)];
  
    reverse(digits.begin(), digits.end());
 
    cout << (nsign ? "-" : "");
    
    for (auto& x : digits) {
        cout << x;
        if (x == maxd)
            cout << x;
    }
    cout << endl;

    //2

    int n1 = 1, k, max = 1;
    while (n1!= 0) {
        cin >> n1;
        if (n1 > max) {
            max = n1;
            k = 1;
        }
        else
            if (n1 == max)
                k++;
    }
    cout << k <<"times";
}