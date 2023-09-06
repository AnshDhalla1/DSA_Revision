I/p - "AB"
O/p - "", "A", "B", "AB"

//We can generate subsets for length 'n' string using subsets for length 'n-1'

  void subsets(string &s, string arr ="", int i=0){
    if(i == s.length()){ 
      print(curr);
      return;
    }
    subsets(s, curr, i+1);
    subsets(s, curr + s[i], i+1)
  }
  
  
