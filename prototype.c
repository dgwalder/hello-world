int main()
{
  int a, b, c;
  printf("Hello world");
  printf("This is the testing github out");
  printf("Enter a random number: ");
  scanf("%d", &a);
  testing(a);
  printf("\nSuccessfully finished compiling");
}

void testing(int a)
{
  printf("\nThis is testing this function");
  printf("\nThis is the number that was entered in main: %d", a);
  return;
}
