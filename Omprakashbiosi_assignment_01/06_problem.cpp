/*6. Write a C++ program to print the pattern
   sample output: for n=3              for n=2
   123                                            12
   112233                                      1122
   111222333
   */
  #include <iostream>
  using namespace std;
  int main()
  {
      int n, a, b, c;
      cout << "Enter any number" << endl;
      cin >> n;
      for (a = 1; a <= n; a++)
      {
          for (c = 1; c <= n; c++)
          {
              for (b = 1; b <= a; b++)
              {
                  cout << c;
              }
          }
          cout << endl;
      }
      return 0;
  }
  