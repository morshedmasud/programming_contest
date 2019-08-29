#include <iostream>
using namespace std;

#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int letter(int bin[]){

  int sum = 0;
  int x = 0;
  for(int i = 7; i >= 0; i--){
      sum += (bin[i] * pow(2, x));
      x++;
  }

  printf("%c", sum);
  return 0;
}

int main()
{
    bool y = true;
    char str[10];
    gets(str);
    while(gets(str)){
      if(str[0] == '_'){
        break;
      }

      int t = 0;
      int bin[8];
      for(int i = 0; i < 11; i++){

        if (str[i] != '|' && str[i] != '.'){

            if(str[i] == 'o'){

                bin[t] = 1;
                t++;
            }
            else if (str[i] == ' '){
                bin[t] = 0;
                t++;
            }
        }
      }
      letter(bin);
    }

    return 0;
}