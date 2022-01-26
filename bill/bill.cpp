#include <algorithm>
#include <bits/stdc++.h>
#define max 10000

using namespace std;

int main() {
  string name, prodname[max];
  int customer, nop, qt[max], cost[max], i, temp[max];
  cout << "name:-";
  cin >> name;
  cout << "\ntoken number:-";
  cin >> customer;
  cout << "\nnumber of items:-";
  cin >> nop;

  cout << "product,quantity,cost" << endl;
  cout << "****************************" << endl;
  for (i = 1; i <= nop; i++) {
    cout << i << " ";
    cin >> prodname[i] >> qt[i] >> cost[i];
    cout << "****************************" << endl;
  }
  system("clear");
  cout << "************************************" << endl;
  cout << " name:-" << name << " no:-" << customer << endl;
  cout << "************************************" << endl;
  cout << "no prodname qt cost total" << endl;

  for (i = 1; i <= nop; i++) {
    temp[i] = qt[i] * cost[i];
    cout << i << " " << prodname[i] << "   " << qt[i] << "  " << cost[i] << " "
         << temp[i] << endl;
  }
  cout << "************************************" << endl;
  int a;
  for (i = 1; i <= nop; i++) {
    a = a + temp[i];
  }
  cout << "total :- " << a << endl;
  cout << "************************************" << endl;
  return 0;
}
