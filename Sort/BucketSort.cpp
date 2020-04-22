#include "../Data/data.h"

/*
    값을 배열의 인덱스로 정의하여 인덱스가 참 일 경우 출력
*/

class BucketSort{
public:
    BucketSort(){
        arr = new bool[size + 1];
    };
    ~BucketSort(){};

    void print(){
        for (int i = 0; i < size; i++){
            if (arr[i] == true)
                std::cout << i << "\n";
        }
    }

    void run(){
        for (int i = 0; i < size; i++)
            arr[data[i]] = true;
        print();
    }

    
private:
    bool* arr;
};

void print_fnc(int n) {
    std::cout << n << "\n";
}

int main(){
    BucketSort b;
    b.run();
}