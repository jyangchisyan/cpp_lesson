#include <iostream>

class Counter {
public:
    void add(int amount) {
        count+=amount;
    }

    int get() const {
        return count;
    }

private:
    int count = 0;
};

int main() {
    int value1, value2;
    std::cin >> value1 >> value2 ;
    Counter counter;
    counter.add(value1);
    counter.add(value2);
    std::cout << counter.get() << "\n";
    return 0;
}
