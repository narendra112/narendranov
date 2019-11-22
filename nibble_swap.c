  #include<stdio.h>
  void main()
  {
  int i,k,a;
  printf("Enter any number\n");
  scanf("%d",&a);
  k=(((a&0x0000ffff)<<16)|((a&0xffff0000)>>16));
  printf("%d\n",k);
  }
