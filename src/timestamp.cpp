#include <iostream>
#include <chrono>
#include <format>
#include <string.h>

void access_array_out_of_bounds()
{
   int array[5] = {1, 2, 3, 4, 5};

    // Correctly accessing the array
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Accessing array out of bounds - Undefined behavior
    printf("Accessing out of bounds: %d\n", array[5]);
}

void buffer_overflow_1()
{
   char buffer[10];
    // This line deliberately causes a buffer overflow
    strcpy(buffer, "This string is way too long for the buffer");
    printf("%s\n", buffer);
}

void dereference_null_pointer()
{
   int *ptr = NULL;
   printf("%d", *ptr); // Dereferencing a NULL pointer
}

int main(void)
{
   auto now = std::chrono::system_clock::now();
   auto seconds = std::chrono::time_point_cast<std::chrono::seconds>(now);
   std::cout<<std::format("{:%Y%m%d-%H%M%S}", seconds)<<std::endl;

   // Call problematic functions
   access_array_out_of_bounds();
   buffer_overflow_1();
   dereference_null_pointer();
   return 0;
}
