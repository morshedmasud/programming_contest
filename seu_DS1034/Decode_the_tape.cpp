#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int letter(int bin[8]){

    int sum = 0;
    int x = 0;
    for(int i = 7; i >= 0; i--){
        sum += (bin[i] * pow(2, x));
        x++;
    }

    return sum;
}

int main()
{
    int bin[8];
    bool y = true;
    while(y){
        char str[12];
        int l = 11;
        int t = 0;
        for (int i = 0; i < 11; i++)
        {
            scanf("%c", &str[i]);
            if (str[0] == '_'){
                y = false;
            }
            else if (str[i] == '\n'){
                break;
            }
            else if (str[i] != '|' && str[i] != '.'){
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
        // if (y == true){
        //     printf("%c", letter(bin));
        //     printf("\n");
        // }
        printf("%c", letter(bin));
        printf("\n");

        // int t = 0;
        // if (y){
        //     for(int i = 0; i < 11; i++){
        //         if (str[i] != '|' && str[i] != '.'){
        //             if(str[i] == 'o'){
        //                 bin[t] = 1;
        //                 t++;
        //             }
        //             else if (str[i] == ' '){
        //                 bin[t] = 0;
        //                 t++;
        //             }
        //         }
        //     }
        // }

    }
    return 0;
}