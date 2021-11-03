#include <iostream>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

std::vector<int> fib_below_n(unsigned int n) {
    std::vector<int> v;
    for (int i = 0; v[i] < n; i++) {  //A condição de parada deveria ser essa, imagino eu, mas algo está dando erro
        if (i == 0 || i == 1) {
            v.push_back(1);
        }
        else {
            v.push_back(v[v.size() - 1] + v[v.size() - 2]);
        }
    }
    return v;
}

int main(){
    int n;
    std::vector<int> v;  
    std::cin >> n;
    v = fib_below_n(n);
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << "\n";
    }
    return 0;
}
