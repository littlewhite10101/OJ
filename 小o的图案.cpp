#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,o,last,count;
    char nums[210][210];
    while (scanf("%d",&n)!=EOF)
    {
        memset(nums,' ',44100);
        if (n==1)
        {
            printf("1\n*\n");
            continue;
        }
        last=2*n-1;
        for (i=0;i<n;i++)
        {
            if (i%2==0)
            {
                for (o=i;o<last-i;o++)
                    nums[o][i]='*';
            }
            else
            {
                nums[i-1][i]='*';
                nums[last-i][i]='*';
            }
            if (i%2!=0&&2*n>=3)
            {
                for (o=0;o<last;o++)
                    nums[o][i+2]=nums[o][i+1]=nums[o][i];
            }
        }
        count=2;
        for (i=n;i<last;i++)
        {
            for (o=0;o<last;o++)
            {
                nums[o][i]=nums[o][i-count];
                if (i==last-1)
                    nums[o][last]='\0';
            }
            count+=2;
        }
        printf("%d\n",n);
        for (o=0;o<last;o++)
            puts(nums[o]);
    }
}
