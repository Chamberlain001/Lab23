#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc, char *argv[]){
    if(argc <= 1) cout << "Please input numbers to find average.\n";
    else{
        float sum;
        for(int i = 0; i < argc - 1; i++){
            sum += atof(argv[i+1]);
        }
        sum /= argc - 1;
        cout << "---------------------------------\n";
        cout << "Average of " << argc - 1 << " numbers = " << sum << "\n";
        cout << "---------------------------------";
    }
    return 0;
}
