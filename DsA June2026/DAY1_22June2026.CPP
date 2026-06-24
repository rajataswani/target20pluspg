#include<iostream>
using namespace std;
void print1(int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<=i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print3(int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<=i; j++) {
            cout<<j+1;
        }
        cout<<endl;
    }
}
void print4(int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<=i; j++) {
            cout<<i+1;
        }
        cout<<endl;
    }
}
void print5(int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n-i; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print6(int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n-i; j++) {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
void print7(int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<n-i-1; j++) {
           cout<<"  ";
        }
        for(int j = 0; j<(2*i)+1; j++) {
           cout<<"* ";
        }
        // for(int j = 0; j<n-i-1; j++) {
        //   cout<<"- ";
        // }
        
        cout<<endl;
    }
}
void print8(int n) {
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<i; j++) {
           cout<<"  ";
        }
        for(int j = 0; j<(2*n)-(2*i)-1; j++) {
           cout<<"* ";
        }
        // for(int j = 0; j<n-i-1; j++) {
        //   cout<<"- ";
        // }
        
        cout<<endl;
        
    }
}
void print9(int n) {
    print7(n);
    print8(n);
    
    //this is a more suitable option, supports only even numbers to work properly, but is a perfect if the end user is assuming n to be the number of rows only.
    // print7(n/2);
    // print8(n/2);
}
void print10(int n) {
        for(int i = 0; i<n; i++) {
            
            for(int j = 0; j<=i; j++) {
               cout<<"* ";
            }
            cout<<endl;
        }
        for(int i = 1; i<n; i++) {
            for(int j = 0; j<n-i; j++) {
                cout<<"* ";
            }
            cout<<endl;
        }
}
void print11(int n) {
    int num=1;
        for(int i = 0; i<n; i++) {
            
            for(int j = 0; j<=i; j++) {
                if((i%2==0 && j%2==0) || (i%2==1 && j%2==1) ) {
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            //   cout<<num<<" ";
            //   num = num ? 0 : 1;
            }
            cout<<endl;
        }

}
void print12(int n) {
        for(int i = 0; i<n; i++) {
            //left triangle
            for(int j = 0; j<=i; j++) {
                cout<<j+1;    
            }
            //spaces
            for(int j = 0; j<((2*n)-(2*(i+1))); j++) {
                cout<<"-";    
            }
            //right triangle
            for(int j = 0; j<=i; j++) {
                cout<<i-j+1;    
            }
            cout<<endl;
        }
}
void print13(int n) {
    int count = 1;
        for(int i = 0; i<n; i++) {
            //left triangle
            for(int j = 0; j<=i; j++) {
                cout<<count<<" ";
                count++;
            }
            cout<<endl;
        }
}
void print14(int n) {
    char count = 'A';
        for(int i = 0; i<n; i++) {
            //left triangle
            for(int j = 0; j<=i; j++) {
                cout<<char(count+j)<<" ";
                // count++;
            }
            cout<<endl;
        }
}
void print15(int n) {
    char count = 'A';
        for(int i = 0; i<n; i++) {
            //left triangle
            for(int j = 0; j<n-i; j++) {
                cout<<char(count+j)<<" ";
                // count++;
            }
            cout<<endl;
        }
}
void print16(int n) {
    char count = 'A';
        for(int i = 0; i<n; i++) {
            
            for(int j = 0; j<=i; j++) {
                cout<<char(count+i)<<" ";
                // count++;
            }
            cout<<endl;
        }
}
void print17(int n) {
    for(int i = 0; i<n; i++) {
        //for left spaces
        for(int j = 0; j<n-i; j++) {
            cout<<" ";
        }
        //for characters left aligned
        char ch = 'A';
        for(int j = 0; j<=i; j++) {
            cout<<char(ch+j);
        }
        //for characters right aligned
        for(int j = 0; j<i; j++) {
            cout<<char(ch+(i-j)-1);
        }
        cout<<endl;
    }
}
void print18(int n) {
    for(int i = 0; i<n; i++) {
       char ch = 'A';
       for(int j = 0; j<=i; j++){
           cout<<char(ch-i+j+n-1)<<" ";
       }
        cout<<endl;
    }
}
void print19part1(int n) {
    for(int i = 0; i<n; i++) {
       for(int j = 0; j<n-i; j++){
           cout<<"*";
       }
       for(int j = 0; j<2*i; j++) {
           cout<<" ";
       }
       for(int j = 0; j<n-i; j++){
           cout<<"*";
       }
        cout<<endl;
    }
}
void print19part2(int n) {
    for(int i = 0; i<n; i++) {
       for(int j = 0; j<=i; j++){
           cout<<"*";
       }
       for(int j = 0; j<(2*n)-(2*(i+1)); j++) {
           cout<<" ";
       }
       for(int j = 0; j<=i; j++){
           cout<<"*";
       }
        cout<<endl;
    }
    
}
void print19(int n) {
    //FOR INPUT N, OUTPUT WILL HAVE 2N ROWS
    print19part1(n);
    //Lower Part of the pattern
    print19part2(n);
}
void print20(int n) {
    // print19part2(n);
    // print19part1(n);
    //FOR INPUT N, OUTPUT WILL HAVE (2N-1) ROWS 
    print19part2(n);
    //part2
    for(int i = 1; i<n; i++) {
        //star1
        for(int j =0; j<=n-i-1; j++) {
            cout<<"*";
        }
        //space
        for(int j =0; j<(2*(i)); j++) {
            cout<<" ";
        }
        //star2
        for(int j =0; j<=n-i-1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
void print21(int n) {
    //first line
  for(int i =0; i<n; i++) {
      cout<<"*";
  }
  cout<<endl;
  //second line to second last line
  for(int i =0; i<n-2; i++) {
      cout<<"*";
      for(int j = 0; j<n-2; j++) {
          cout<<" ";
      }
      cout<<"*";
      cout<<endl;
  }
  //last line
  for(int i =0; i<n; i++) {
      cout<<"*";
  }
}
/*
void print22helper(int n) {
    // cout<<"<i>";
    // cout<<n+1;
    for(int i = 0; i<2*n-1; i++) {
        cout<<n;
    }
    // cout<<n+1;
}
void print22(int n) {
    if(n>1) {
        // for(int i =0; i<2*n-1; i++) {
        //     cout<<n;
        // }
        print22helper(n);
        cout<<endl;
        cout<<n;
        print22(n-1);
        cout<<n;
        cout<<endl;
        
        // for(int i =0; i<2*n-1; i++) {
        //     cout<<n;
        // }
        print22helper(n);
        
    }
    else cout<<"1";
}
void edited(int n) {
    for(int i =0; i<2*n-1; i++) {
        cout<<n;
    }
    cout<<endl;
    cout<<n;
    if(n==1) return;
    edited(n-1);
}
void printillinitial(int n, int initial) {
    for(int i =n ; i<initial; i++) {
        cout<<i;
    }
}
void helprec(int n, int initial) {
    if(n==1) {
        cout<<"1"<<endl;
        return;
    }
    printillinitial(n, initial);
    for(int i =0; i<2*n-1; i++) {
        cout<<n;
    }
    printillinitial(n, initial);
    cout<<endl;
    helprec(n-1, initial);
    printillinitial(n, initial);
    for(int i =0; i<2*n-1; i++) {
        cout<<n;
    }
    printillinitial(n, initial);
    cout<<endl;
    
}
void rec22(int n) {
    int initial = n;
    if(n==1) {
        cout<<"1"<<endl;
        return;
    }
    for(int i =0; i<2*n-1; i++) {
        cout<<n;
    }
    cout<<endl;
    helprec(n-1, initial);
    for(int i =0; i<2*n-1; i++) {
        cout<<n;
    }
    cout<<endl;
    
}
void two(int n) {
    for(int i = 0; i<2*n-1; i++) {
        for(int j =0; j<2*n-1; j++) {
            int mini = ((n-i)<(n-j)?(n-j) :(n-i));
            if(mini<1) return;
            cout<<mini;
        }
        // for(int j =n-i+1; j<2*n-1; j++) {
        //     int maxi = ((n-i)<(n-j)?(n-i) :(n-j));
        //     cout<<maxi;
        // }
        cout<<endl;
    }
}
*/

int main() {
    int n;
    cout<<"Enter your n : ";
    cin>>n;
    two(n);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"The following patterns logic are designed by me only, using logical thinking and needs to be compared with the actual logic that the question is expecting: "<<endl;
    cout<<"Pattern: 10, 11 and so on";
    return 0;
}
