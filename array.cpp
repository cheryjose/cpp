#include <algorithm>
#include <iostream>  
using namespace std;


int* addBonus(int transactions[], int size)
{
  cout << "Display bonuses added\n";
  for (int i =0; i < size; i++)
  {
    transactions[i] += 10;
    cout << transactions[i] << "\n";
  }
  return transactions;
}


int* sortedBonus(int transactions[], int size)
{
  addBonus(transactions, size);
  sort(transactions, transactions+size);
  cout << "Display bonuses added and sorted\n";
  for (int i =0; i < size; i++)
  {
    cout << transactions[i] << "\n";
  }
  return transactions;
}
