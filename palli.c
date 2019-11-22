    #include <stdio.h>
     
    int main()
    {
       char n[100], r = 0, t;
     
       printf("Enter an integer to check if it is palindrome or not\n");
       scanf("%s",n);
     
       t = n;
     
       while (t != 0)
       {
          r = r * 10;
          r = r + t%10;
          t = t/10;
       }
     
       if (n == r)
          printf("%s is a palindrome number.\n", n);
       else
          printf("%s isn't a palindrome number.\n", n);
     
       return 0;
    }
