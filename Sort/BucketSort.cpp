#include "../Data/data.h"

/*
    ���� �迭�� �ε����� �����Ͽ� �ε����� �� �� ��� ���
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