#include "../../testlib.h"
#include <string>
#include "test_gen.h"

using namespace std;

void Gen() {
    for(int i = 1 ; i <= TEST_NUM-10 ; i++) {
        string file_name = INPUT_FILES + to_string(i) + ".in";
        ofstream fout(file_name);
        int n = MAX_N;
        fout<<n<<endl;
        for(int i = 0 ; i < n ; i++)
            fout<<rnd.next(INT_MAX)<<" ";
    }
    for(int i = TEST_NUM - 9 ; i <= TEST_NUM - 5 ; i++) {
        string file_name = INPUT_FILES + to_string(i) + ".in";
        ofstream fout(file_name);
        int n = MAX_N;
        fout<<n<<endl;
        for(int i = 0 ; i < n ; i++)
            fout<<i<<" ";
    }
    for(int i = TEST_NUM - 4 ; i <= TEST_NUM ; i++) {
        string file_name = INPUT_FILES + to_string(i) + ".in";
        ofstream fout(file_name);
        int n = MAX_N;
        fout<<n<<endl;
        for(int i = 0 ; i < n ; i++)
            fout<<n-i<<" ";
    }

}

int main() {
    Gen();
}