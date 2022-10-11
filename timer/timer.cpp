#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>
#include <time.h>
int main(int argc, char const *argv[])
{
    time_t t1 = time(NULL);
    std::this_thread::sleep_for (std::chrono::seconds(1));
    time_t t2 = time(NULL);
    std::cout << difftime(t1,t2)<<std::endl;
    return 0;
}
