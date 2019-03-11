//別複製貼上喔!
#include <iostream>
#include <stack>
using namespace std;

int main() {
  stack<int> box, out, output;

  int amountB, amountT, b, countB = 0, countP = 0;
  char a;
  cin >> amountB >> amountT;
  for( int t = 0 ; t < amountT ; t ++ ){
    cin >> a >> b;
    switch( a ){
      case 'a':
        for( int t2 = 0 ; t2 < b && countB < amountB; t2 ++ ){
          box.push( countB + 1 );
          countB ++;
        }
        break;
      case 'b':
        for( int t2 = 0 ; t2 < b && countP < countB; t2 ++ ){
          out.push( box.top() );
          box.pop();
          countP ++;
        }
        break;
      default:
      	cout << "錯誤的操作"; 
    }
  }
  for( int t = 0 ; t < countP ; t ++ ){
    output.push( out.top() );
    out.pop();
  }
  for( int t = 0 ; t < countP ; t ++ ){
    cout << output.top() << " ";
    output.pop();
  }
  return 0;
}
