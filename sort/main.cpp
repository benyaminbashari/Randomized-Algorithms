#include <bits/stdc++.h>
#include <chrono>
#include "sort_algorithms.h"
#include "inputs/test_gen.h"

using namespace std;
using namespace chrono;

typedef long long ll;

const string RESULTS_FOLDER = "results/";

int inputArr[MAX_N], n;

void Test(int method) {  
    vector<ll>result;
    for(int i = 1 ; i <= TEST_NUM ; i++) {
        ifstream fin("inputs/" + INPUT_FILES + to_string(i) + ".in");
        fin>>n;
        for(int i = 0 ; i < n ; i++)
            fin>>inputArr[i];
        steady_clock::time_point start = steady_clock::now();
        if(method == MERGE_SORT)
            MergeSort(inputArr, n);
        else if(method == QUICK_SORT)
            QuickSort(inputArr, n);
        steady_clock::time_point end = steady_clock::now();
        result.push_back(duration_cast<milliseconds>(end - start).count());
        cout<<"Test "<<i<<" on Merge Sort: "<<duration_cast<milliseconds>(end - start).count()<<" Milliseconds"<<endl;
    }
     ofstream fout;
    if(method == MERGE_SORT)
         fout.open(RESULTS_FOLDER + "MergeSort.txt");
    else if(method == QUICK_SORT)
        fout.open(RESULTS_FOLDER + "QuickSort.txt");
    for(int i = 0 ; i < result.size() ; i++) 
        fout<<i+1<<"\t"<<result[i]<<endl;
}

int main(int argc, char *argv[]) {
    if(argc != 2) {
        cout<<"There should be exactly 1 argument."<<endl;
        cout<<"The argument is eaither MERGE or QUICK"<<endl;
        return 1;
    }
    string method(argv[1]);
    if(method == "MERGE")
        Test(MERGE_SORT);
    else if(method == "QUICK")
        Test(QUICK_SORT);
    else {
        cout<<"The argument is eaither MERGE or QUICK"<<endl;
        return 1;
    }
  
}


