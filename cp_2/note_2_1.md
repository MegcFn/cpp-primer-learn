求模/余：
1. 求 整数商： c = a/b;
2. 计算模或者余数： r = a - c*b.

取模后所得余数:
example:
```cpp
unsigned char x = -1;
```
char: 0~255, c = floor(-1/256) = -1, r = -1 - (-1) * 256 = 255, x = 255.