#include<stdio.h>
#include<string.h>
int value(char r)
{
	if (r == 'I')
		return 1;
	if (r == 'V')
		return 5;
	if (r == 'X')
		return 10;
	if (r == 'L')
		return 50;
	if (r == 'C')
		return 100;
	if (r == 'D')
		return 500;
	if (r == 'M')
		return 1000;
	return 0;
}
int main()
{
	char str[10];
    int s1,s2 ;
    gets(str);
    int res = 0;
	for (int i = 0; i < strlen(str); i++)
	{
		 s1 = value(str[i]);

		if (i + 1 < strlen(str))
		{
			 s2 = value(str[i + 1]);
			if (s1 >= s2)
			{
				res = res + s1;
			}
			else
			{

				res = res + s2 - s1;
				i++;
			}
		}
		else {
			res = res + s1;
		}
	}
    printf("%d",res);
	return 0;
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[100];
//     gets(str);
//     int n=strlen(str);
//     int arr[n];
//     int i=0,sum=0;
//     label: switch(str[i])
//     {
//         case 'I':
//                  arr[i]=1;
//                  break;
//         case 'V':
//                  arr[i]=5;
//                  break;
//          case 'X':
//                  arr[i]=10;
//                  break;

//         case 'L':
//                  arr[i]= 50;
//                  break;
//         case 'C':
//                  arr[i]=100;
//                  break;
//         case 'D':
//                  arr[i]=500;
//                  break;
//         case 'M':
//                  arr[i]=1000;
//                  break;
                 
//     }
//     if(i=!n)
//     {
//         i++;
//         goto label;
//     }
//     for(int i=0;i<n;i++)
//     {
//         printf("%d",arr[i]);
//         sum=sum+arr[i];
//     }
//     printf("\n%d\n",sum);
// }