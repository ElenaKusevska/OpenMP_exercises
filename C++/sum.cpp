# include<iostream>

int main() {
  double a;

  a = 0;

  for (int i = 0; i < 5; i++) {
    a = a + double(i);
  }
  std::cout << a << std::endl;
  return 0;
}
