#include <iostream>
#include <vector>



int main(){
    std::vector<int> vec = {1,3,2,5,1,3,5};

    float sum;
    for (int i= 0; i < vec.size(); i++){
        sum += vec[i];
    }

    // for each loop
    // for (auto& num : vec){
    //     sum += num;
    // }

    float mean = sum/vec.size();

    std::cout << "Promedio: " << mean << std::endl;

    return 0;
}