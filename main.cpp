#include <iostream>
#include <vector>

int main(){

    int arraySize;
    std::cout << "How many TO-DO's you have? ";
    std::cin >> arraySize;

    std::vector<std::string> toDo;
    std::string input;
    
    while (toDo.size() < (arraySize)){
        std::cout << "Enter your TO-DO" << toDo.size() + 1 << ": ";
        std::getline(std::cin >> std::ws, input);
        toDo.push_back(input);
    }

    std::cout << "\nYour TO-DO list:\n";
    for (int i = 0; i < toDo.size(); i++){
        std::cout << i + 1 << ' ' << toDo[i] << "\n";
    }

    char D; 
    std::cout << "If you want to delete specific TO-DO, press D and then chose your task. ";
    std::cin >> D;
    
    if(D=='D' || D=='d'){
        int taskNumber;
        std::cout << "Enter the chosen task";
        std::cin >> taskNumber;

        if (taskNumber > 0 && taskNumber <= toDo.size()){
            toDo.erase(toDo.begin() + (taskNumber - 1));
            std::cout << "TO-DO " << taskNumber << " has been deleted.\n";

            std::cout << "\nUpdated TO-DO list:\n";
            for (int i = 0; i < toDo.size(); i++){
                std::cout << i + 1 << ". " << toDo[i] << "\n";
            }
        }else{
            std::cout << "Invalid task number";
        }  
     return 0;
    }
}
