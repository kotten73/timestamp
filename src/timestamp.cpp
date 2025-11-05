#include <iostream>
#include <chrono>
#include <format>

int main(void)
{
   auto now = std::chrono::system_clock::now();
   auto seconds = std::chrono::time_point_cast<std::chrono::seconds>(now);
   std::cout<<std::format("{:%Y%m%d-%H%M%S}", seconds)<<std::endl;
   return 0;
}
