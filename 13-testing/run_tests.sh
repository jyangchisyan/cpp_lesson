set -e
g++ -std=c++17 -Wall -Wextra pass_test.cpp -o pass_test
g++ -std=c++17 -Wall -Wextra score_range_test.cpp -o score_range_test

./pass_test
./score_range_test

echo "全部測試通過"
