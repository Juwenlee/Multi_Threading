/*
C++ 11中的多线程技术
C++11 新标准中引入了四个头文件来支持多线程编程，他们分别是 <atomic> ,<thread>,<mutex>,<condition_variable>和<future>。
    <atomic>：提供原子操作功能，该头文主要声明了两个类, std::atomic 和 std::atomic_flag，另外还声明了一套 C 风格的原子类型和与 C 兼容的原子操作的函数。
    <thread>：线程模型封装，该头文件主要声明了 std::thread 类，另外 std::this_thread 命名空间也在该头文件中。
    <mutex>：互斥量封装，该头文件主要声明了与互斥量(mutex)相关的类，包括 std::mutex 系列类，std::lock_guard, std::unique_lock, 以及其他的类型和函数
    <condition_variable>：条件变量，该头文件主要声明了与条件变量相关的类，包括 std::condition_variable 和 std::condition_variable_any。
    <future>：实现了对指定数据提供者提供的数据进行异步访问的机制。该头文件主要声明了 std::promise, std::package_task 两个 Provider 类，以及 std::future 和 std::shared_future 两个 Future 类，另外还有一些与之相关的类型和函数，std::async() 函数就声明在此头文件中。
*/

#include <iostream>
#include <thread>
using namespace std;
void thread_1(){
    cout << "hello from thread_1" << endl;
}

int main(int argc, char **argv)
{
    thread t1(thread_1);    /**    join()相当于调用了两个函数：WaitForSingleObject、CloseHandle，事实上，在vc12中也是这么实现的    */
    t1.join();
    return 0;
}
