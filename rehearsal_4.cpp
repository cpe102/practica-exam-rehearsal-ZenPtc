#include <iostream>
using namespace std;
//Write compress() here.
string compress(string S){
    string newS = "";
    int i=0;
    while(i < S.size()){
        newS += S[i];
        i += 3;
    }
    return newS;
}

int main()
{
    string a = compress("ABCDEFGHIJKLMN");
    string b = compress("123456");
    string c = compress("HelloWorld");
    string d = compress("BNK48");
    string e = compress("COMPROG261102");
    string f = compress("A");
    string g = compress("AB");
    string h = compress("ABC");
    string i = compress("ABCD");
    string j = compress("CPECMU");
    string l = compress("X");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";
    cout << j << endl << l;
}
