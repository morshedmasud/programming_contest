#include <stdio.h>
#include <time.h>

int main()
{
    double t2 = clock(), t1;
    int testCase, day, totalParty, inputArray[101], party, countData;
    scanf("%d", &testCase);

    while (testCase--)
    {
        scanf("%d", &day);
        scanf("%d", &totalParty);
        for (int i = 0; i<101; i++)
            inputArray[i] = 0;
        while (totalParty--)
        {
            scanf("%d", &party);

            for (int i = party; i <= day; i += party)
                inputArray[i] = 1;
        }
        countData = 0;

        for (int i = 0; i <= day; i++)
            if ((i % 7 != 0) && (i % 7 != 6) && (inputArray[i] == 1))
                countData++;

        printf("%d\n", countData);
    }
    t1 = clock();
    printf("%f\n", t1 - t2);
    return 0;
}