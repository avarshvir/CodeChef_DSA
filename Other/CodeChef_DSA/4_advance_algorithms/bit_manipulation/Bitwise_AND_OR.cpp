#include <bits/stdc++.h>
using namespace std;
 
int main() {
    /*  
        //\  |\  | |-\\      //-\\ |--|
       //_\\ | \ | |  || ---||   |||\-|
      //   \\|  \| |-//      \\-// | \

   */
    int A,B;
    A = 5;
    B = 11;
    int AND = A & B;  // 0101 & 1011
    int OR = A | B;  // 0101 | 1011

    cout << "The Bitwise AND is: " << (A & B) << "\n";
    cout << "The Bitwise OR is: " << (A | B) << "\n";
    
    return 0;

}