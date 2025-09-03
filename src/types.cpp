#include <cstdio>
#include <cstdlib>
#include <type_traits> // 用于类型特性检查

template <typename T>
void printVarInfo(const char *name, T value)
{
    printf("%s: ", name);

    // 根据类型自动选择格式说明符
    if constexpr (std::is_same_v<T, short>)
    {
        printf("%hd", value);
    }
    else if constexpr (std::is_same_v<T, unsigned short>)
    {
        printf("%hu", value);
    }
    else if constexpr (std::is_same_v<T, int>)
    {
        printf("%d", value);
    }
    else if constexpr (std::is_same_v<T, unsigned int>)
    {
        printf("%u", value);
    }
    else if constexpr (std::is_same_v<T, long>)
    {
        printf("%ld", value);
    }
    else if constexpr (std::is_same_v<T, unsigned long>)
    {
        printf("%lu", value);
    }
    else if constexpr (std::is_same_v<T, long long>)
    {
        printf("%lld", value);
    }
    else if constexpr (std::is_same_v<T, unsigned long long>)
    {
        printf("%llu", value);
    }
    else if constexpr (std::is_same_v<T, char>) // 字符型
    {
        printf("%c (ASCII: %d)", value, value);
    }
    else if constexpr (std::is_same_v<T, signed char>) // 有符号字符型
    {
        printf("%hhd (ASCII: %d)", value, value);
    }
    else if constexpr (std::is_same_v<T, unsigned char>) // 无符号字符型
    {
        printf("%hhu (ASCII: %d)", value, value);
    }
    else if constexpr (std::is_same_v<T, float>) // 单精度浮点数
    {
        printf("%f", value);
    }
    else if constexpr (std::is_same_v<T, double>) // 双精度浮点数
    {
        printf("%f", value);
    }
    else if constexpr (std::is_same_v<T, long double>) // 长双精度浮点数
    {
        printf("%Lf", value);
    }
    else if constexpr (std::is_same_v<T, bool>) // 布尔型
    {
        // 两种输出方式可选：
        // 1. 输出为文本 true/false
        printf("%s", value ? "true" : "false");
        // 2. 或者输出为数字 1/0
        // printf("%d", value);
    }
    else
    {
        // 对于其他未知类型，使用默认输出方式
        printf("%d", static_cast<int>(value));
    }

    printf("\n");
    printf("%s size: %zu\n", name, sizeof(value));
}

int main()
{
    printf("----------------整形（有符号）----------------\n");
    short s_a = 1;
    int i_a = 2;
    long l_a = 3;
    long long ll_a = 4;

    printVarInfo("s_a", s_a);
    printVarInfo("i_a", i_a);
    printVarInfo("l_a", l_a);
    printVarInfo("ll_a", ll_a);

    printf("----------------整形（无符号）----------------\n");
    unsigned short us_a = 11;
    unsigned int ui_a = 12;
    unsigned long ul_a = 13;
    unsigned long long ull_a = 14;

    printVarInfo("us_a", us_a);
    printVarInfo("ui_a", ui_a);
    printVarInfo("ul_a", ul_a);
    printVarInfo("ull_a", ull_a);

    printf("----------------字符型----------------\n");
    char c_a = 'A';          // 字符'A'
    signed char sc_a = 66;   // ASCII码66对应'B'
    unsigned char uc_a = 67; // ASCII码67对应'C'
    printVarInfo("c_a", c_a);
    printVarInfo("sc_a", sc_a);
    printVarInfo("uc_a", uc_a);

    printf("----------------浮点型----------------\n");
    float f_a = 3.14159f;
    double d_a = 2.71828;
    long double ld_a = 1.41421;
    printVarInfo("f_a", f_a);
    printVarInfo("d_a", d_a);
    printVarInfo("ld_a", ld_a);

    printf("----------------布尔型----------------\n");
    bool b_true = true;
    bool b_false = false;
    printVarInfo("b_true", b_true);
    printVarInfo("b_false", b_false);

    return 0;
}