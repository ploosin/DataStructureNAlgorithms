#include "../Data/data.h"

/*
    각 자릿수에 따라 1의 자리부터 Bucket Sort를 반복하여 정렬
    아직 미완.
*/

class RadixSort{
private:
    int position;
    int *arr;
public:
    RadixSort(){
        arr = new int[size];
    };
    ~RadixSort(){
        delete arr;
    };

    void run(){
        bool is_sorted = false;
        position = 1;
        std::vector<int> queue_list[10];

        while (!is_sorted){
            is_sorted = true;
            
            for (int i = 0; i < 10; i++) queue_list[i].clear();

            for (int i = 0; i < size; i++){
                int digit_number = (data[i]/position) % 10;
                queue_list[digit_number].push_back(data[i]);
                if (is_sorted && digit_number > 0)
                    is_sorted = false;
            }

            int index = 0;

            for (int i = 0; i < 10; i++){
                for (int j = 0; j < queue_list[i].size(); j++){
                    arr[index] = queue_list[i][j];
                    index++;
                }
            }
            position *= 10;
        }
        print_arr(arr, _msize(arr)/sizeof(int));
    }
};

int main(){
    RadixSort r;
    r.run();
}