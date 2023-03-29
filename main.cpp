// This defines and executes a function to draw a rectangle in the terminal!

#include <iostream>
#include <string>

void drawBox(int x = 3, int y = 3, const std::string &material = "[]")
{
  for (int i = y; i > 0; --i)
  {
    for (int j = x; j > 0; --j)
    {
      std::cout << material;
    }
  std::cout << '\n';
  }
}

int main()
{
  std::cout << "Enter material (default = '[]'):";
  std::string material;
  std::cin >> material;

  std::cout << "Enter value for height (default = 3) ";
  int height;
  std::cin >> height;

  std::cout << "Enter value for length (default = 3) ";
  int length;
  std::cin >> length;

  drawBox(length, height, material);
}
