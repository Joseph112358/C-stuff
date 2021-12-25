// Vectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

void printqueue(std::vector<std::string> queue);
int main()
{
    // Example 1
    std::string name = "hello";
    std::vector<std::string> queue = {"Jeff","Jim","Jeremy"};
    queue.push_back("Joe");
    while (queue.size() > 1) {
        std::cout << queue[0]  << std::endl;
        queue.erase(queue.begin());
    }
    std::cout << queue.front() << std::endl;


    //Example 2 (Queue implementation
    bool game_state = true;
    std::string answer;
    std::string person;
    std::vector<std::string> ExampleQueue = { "Jeff","Jim","Jeremy" };
    while (game_state == true) {
        
        std::cout << "Would you like to end, printqueue, enqueue or dequeue?" << std::endl;
        std::cin >> answer;
        /*std::cout << answer << std::endl;*/
        if (answer == "end") {
            game_state = false;
        }
        else if (answer == "enqueue") {
            std::cout << "eneter who you would like to join the queue";
            std::cin >> person;
            ExampleQueue.push_back(person);
        }
        else if (answer == "dequeue") {
            std::cout << ExampleQueue[0] << std::endl;
            ExampleQueue.erase(ExampleQueue.begin());
        }
        else if (answer == "printqueue") {
            printqueue(ExampleQueue);
        }
    }

   
    }
   void printqueue(std::vector<std::string> queue){
       for (int i = 0; i < queue.size(); i++) {
           std::cout << queue[i] << std::endl;

       }
   }
    /*std::vector<int> data = { 1,2,3 };
    data.push_back(4);
    data.pop_back();
    std::cout << data[data.size() - 1] << std::endl;*/
    


