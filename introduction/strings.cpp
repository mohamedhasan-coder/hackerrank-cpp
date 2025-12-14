#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    
    string a,b;
    getline(cin,a);
    getline(cin,b);
    int len_a = a.size();
    int len_b = b.size();
    string c = a+b;
    char first1 = a[0];
    char first2 = b[0];
    a[0] = first2;
    b[0] = first1;
    cout<<len_a<<" "<<len_b<<endl;
    cout<<c<<endl;
    cout << a << " " << b;
    return 0;
}
