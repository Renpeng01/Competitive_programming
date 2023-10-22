#include <stdio.h>

// CHO3O3
// 把1~n（n < 10）个整数排成一行后随机打乱顺序，输出所有可能的次序
int order[20];
bool chosen[20];

int n = 3;

// 表示排列的每一个位置
void calc(int k) {
  if (k == n + 1) {
    for (int i = 1; i <= n; i++) {
      printf("%d", order[i]);
    }
    printf("\n");
    return;
  }

  for (int i = 1; i <= n; i++) {
    if (chosen[i]) {
      continue;
    }

    order[k] = i;
    chosen[i] = 1;
    calc(k + 1);
    chosen[i] = 0;
    order[i] = 0;
  }
}

int main() { calc(1); }