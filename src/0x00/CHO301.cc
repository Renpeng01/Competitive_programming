#include <vector>

// CH0301
// 从1~n 这n(n < 20) 个整数中随机选取任意多个，输出所有可能的选择方案
std::vector<int> chosen;
int n = 3;

void calc(int x) {
  if (x == n + 1) {
    for (int i = 0; i < chosen.size(); ++i) {
      printf("%d", chosen[i]);
    }
    printf("\n");
    return;
  }

  calc(x + 1);
  chosen.push_back(x);
  calc(x + 1);
  chosen.pop_back();
}

int main() { calc(1); }