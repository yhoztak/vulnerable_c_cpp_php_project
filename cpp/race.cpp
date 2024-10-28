#include <iostream>
#include <thread>
#include <atomic>

std::atomic<int> sharedVariable(0);

void raceConditionExample() {
    int temp = sharedVariable.load();
    temp += 1;
    sharedVariable.store(temp);
}

int main() {
    std::thread t1(raceConditionExample);
    std::thread t2(raceConditionExample);

    t1.join();
    t2.join();

    std::cout << "Final value of sharedVariable: " << sharedVariable.load() << std::endl; // Unexpected result due to race condition
    return 0;
}