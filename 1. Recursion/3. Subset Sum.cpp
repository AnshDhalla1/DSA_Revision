//We are given a set as an array and a sum. We need to find out count of subsets of array whose sum is equal to the given sum.

//Approach
We will be maintaining sum instead of subset. If sum ==0, return 1. else return 0;

int countSubset(vector<int> &arr, int sum){
  int n = arr.size();
  if(n == 0) return(sum == 0) ? 1:0;

  return countSubset(arr, n-1, sum) + countSubset(arr, n-1, sum - arr[n-1]);
}



//Time Complexity = O(2^n)
