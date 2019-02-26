#include <iostream>
using namespace std;

struct TwinPair {
    int val1, val2;
    TwinPair(): val1(0), val2(0) {}
};

bool is_prime(int a) {
    int count = 0;
    for (int b = 2; b < a; b++) {
        if (a % b == 0)
            count ++;
    }
    if (count >= 1)
        return false;
    else
        return true;
}

TwinPair find_twin_primes (unsigned int chosen_index) {
    TwinPair pair;
    int index = 0;
    int temp1 = 3;
    int temp2;
    while (index < chosen_index) {
        temp2 = temp1 + 2;
        if (is_prime(temp1) && is_prime(temp2))
            index++;
        if (index < chosen_index)
            temp1 += 2;
    }
    cout << "(" << temp1 << ", " << temp2 << ")" << endl ;
    
    pair.val1 = temp1;
    pair.val2 = temp2;
    
    return pair;
}

int main() {
    int i;
    while (i <= 0) {
        cout << "Enter an index" << endl;
        cin >> i;
    }
    find_twin_primes(i);
        
    return 0;
}
