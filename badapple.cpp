#include <fstream>
#include <stdlib.h>
#include <string>
#include <iostream>
#include "windows.h"
#include <chrono>
#include <thread>
#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <ctime>
#include<bits/stdc++.h>
int filename = 1;
template <class Clock, class Duration>
void
sleep_until(std::chrono::time_point<Clock, Duration> tp)
{
    using namespace std::chrono;
    std::this_thread::sleep_until(tp - 10us);
    while (tp >= Clock::now())
        ;
}
void printNTimes(char c, int n)
{
    // character c will be printed n times
    std::cout << std::string(n, c) << std::endl;
}

int
main()
{
    using namespace std;
    using namespace std::chrono;

    using framerate = duration<int, ratio<1, 30>>;
    auto tp = system_clock::now() + framerate{1};

    while (filename < 6673)
    {
    int a;
    int filename = 1;
    char *txt = ".txt";
    //char *directory = "G:/BADAPPLE/CASCII/";
    for(int filename = 1; filename < 6673; filename = filename + 1){;
    std::string directory = "C:/users/mrsak/desktop/test/test/CASCII/"  + std::to_string(filename) + txt;
    //std::cout << directory;
    std::ifstream file(directory);

    if (file.is_open()) {
    std::string line;
    while (getline(file, line)){
        // using printf() in all tests for consistency
        printf("%s", line.c_str());
    }
    file.close();

    }
}
        ::sleep_until(tp);
        tp += framerate{1};
    }
}
