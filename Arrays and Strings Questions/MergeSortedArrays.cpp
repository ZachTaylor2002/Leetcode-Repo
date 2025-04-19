#include <iostream>
#include <vector>

using namespace std;

// TODO: Write your function to merge arr1 and arr2 here
vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    //We want to merge both of the arrays together
    vector<int> final;
    int pointer_one = 0;
    int pointer_two = 0;
    while( (pointer_one < arr1.size()) && (pointer_two < arr2.size()) ){
        //Here we want to push the numbers that are in from least to greatest since we want it sorted.
        //So If the value at arr1 greater than arr2
        if( arr1[pointer_one] > arr2[pointer_two]){
            //We push the lesser value onto the vector
            final.push_back(arr2[pointer_two]);
            pointer_two++;
        }
        //else if value at arr1 is less than arr2
        else if( arr1[pointer_one] < arr2[pointer_two] ){
            //We will push back the lesser value to the stack
            final.push_back(arr1[pointer_one]);
            pointer_one++;
        }
    }
    //In this while loop we will push the leftovers 
    while(pointer_one < arr1.size()){
        final.push_back(arr1[pointer_one]);
        pointer_one++;
        }
    while(pointer_two < arr2.size()){
        final.push_back(arr2[pointer_two]);
        pointer_two++;
    }
    return final;
}

int main() {
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> merged = mergeSortedArrays(arr1, arr2);

    cout << "Merged array: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
