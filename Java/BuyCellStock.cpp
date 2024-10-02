#include <bits/stdc++.h>
using namespace std;

int main()
{
  // initializing the array 
  int arr[] = {7, 1, 5, 3, 6, 4};
  int n = sizeof(arr) / sizeof(arr[0]);

  int minNum = arr[0];
  int profit = 0;
  int cost;

  for (int i = 1; i < n; i++)
  {
    cost = arr[i] - minNum;       // cost kadhli aadhi
    profit = max(profit, cost);   // profit nikala , maximum, cost and profit mese
    minNum = min(minNum, arr[i]); // minNum ko increment kiya ,,, minNUm and arr[i] se
  }
  cout << profit;

  return 0;
}
