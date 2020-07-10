#include <thread>
#include <chrono>

int main()
{
   using namespace std::chrono_literals;
   std::this_thread::sleep_for(20s);

   char *str;

   /* Stored in read only part of data segment */
   str = "GfG";

   /* Problem:  trying to modify read only memory */
   *(str+1) = 'n';
   return 0;
}
