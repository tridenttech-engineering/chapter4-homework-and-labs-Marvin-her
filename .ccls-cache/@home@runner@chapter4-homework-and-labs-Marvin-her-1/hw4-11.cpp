// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double beginingBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWithdrawls = 0.0;
  double finalBalance = 0.0;
  cout << "Begining balance: ";
  cin >> beginingBalance;
  cout << "Total deposits: ";
  cin >> totalDeposits;                    
  cout << "Total withdrawls: ";
  cin >> totalWithdrawls;
  finalBalance = beginingBalance + totalDeposits - totalWithdrawls;
  cout << "Final balance: " << finalBalance << endl;
  return 0;

} // end of main function