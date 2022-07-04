#include <iostream>

using namespace std;

int main(){
  int middle = 1, h, base, baseTot;
  cout << "Please enter your height" << endl;
  cin >> h;

  baseTot  = h * 6;
  base = 2* h - 1;

  for(int top = 0; top < h - 1; top++){
    cout << " ";
  }
  cout << "*";
  for (int top2 = 0; top2 < 2; top2++){
    for(int top = 0; top < 2 * h - 2; top++){
      cout << " ";
    }
    cout << "*";
  }
  cout<<endl;
  for(int rows = h - 2; rows > 0; rows--){
    for(int top = 0; top < rows; top++){    
    cout << " ";
    }
    cout << "*";
    if(rows != h - 1){
      for (int m = 0; m < middle; m++){
        cout << " ";
      }
      middle += 2;
    }
    cout << "*";
    //cout<<endl;
    for(int x = rows * 2; x > 0; x--){
      cout << " ";
    }
    cout << "*";
    //This is where you added new code
    if(rows != 0){
      for (int m = 0; m < middle - 2; m++){
        cout << " ";
      }
      cout << "*";
    }
    // this is where you added more new code
    for (int x = rows * 2; x > 0; x--){
      cout << " ";
    }
    cout << "*";
    if(rows != 0){
      for (int m = 0; m < middle - 2; m++){
        cout << " ";
      }
      cout << "*";
    }
    
    cout << endl;
   }
  // for(int rows = 0; rows < h - 1; rows++){

  // }
  for(int x = 0; x < 2; x++){
    for(int b; b < base; b++){
      cout << "*";
    }
    //base *= 1;
    cout << " ";
    base += base - 1;
  }
  for(int x = 1; x < 2 * h - 1; x++){
    cout << "*";
  }
}

