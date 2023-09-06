//Minimize the maximum pages allocated. Only continuous pages can be allocated.
I/p: arr = [10, 20, 30, 40]    k =2
O/p: 60

//APPROACH 1 (Naive - Recursive)
int minPages(vector<int> arr, int k){
  if(k==1) return sum(arr, 0, n-1);
  if(n == 1) return arr[0];

  int res = INT_MAX;
  for(int i=0; i<n; i++){
    res = min(res, max(minPages()));
  }
}


//APPROACH 2 (Efficient - Binary Search)


