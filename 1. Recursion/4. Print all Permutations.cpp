I/p: s = "ABC"
O/p: "ABC", "ACB", "BAC", "BCA", "CAB", "CBA"

//Approach
// We are going to fix every character at the 1st position & we are going to generate all permutations beginning with that character
  
  vector<string> permute(string &s, int i=0){
    vector<string> v;
    if(i == s.length()-1){
      v.push_back(s);
    }

    for(int j =i; j<s.length(); j++){
      swap(s[i], s[j]);
      permute(s, i+1);
      swap(s[j], s[i]);     //to get original string back
    }
    return v;
  }
