//We have 3 towers A, B, C. the certain discs 'n' which are placed in tower A & our target is to move these discs from tower A to tower c by using tower B as median.

/*
RULES - 
- Only 1 disc at a time.
- No bigger disc above smaller.
- Only the top Disc of a tower can be moved
*/

TOH(n, A, B, C)
  - TOH((n-1), A, C, B)
  - Move Disc 'n' form A to C
  - TOH((n-1), B, A, C)

  void TOH(int n, char A, char B, char C){
    if(n == 1){
      cout<<"Move 1 form"<<A<<"to"<<C<<endl;
      return;
    }
    TOH((n-1), A, C, B)
    cout<<"Move"<<n<<" form"<<A<<"to"<<C<<endl;
    TOH((n-1), B, A, C)
  }
