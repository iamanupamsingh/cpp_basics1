
#include <iostream>

using namespace std;

int
main ()
{
  int i, j;

  /* for (i=1;i<=4;i++){
     for (j=1;j<=4;j++){
     cout<<j;
     }
     cout<<endl;
     }
   */
  i = 1;
  
  while (i <= 4)
    { j=1;              //baar baar j ki value 1 karni hai
      while (j <= 4)
	{
	  cout << j;
	  j++;
	}
      cout << endl;
      i++;
    }


}
