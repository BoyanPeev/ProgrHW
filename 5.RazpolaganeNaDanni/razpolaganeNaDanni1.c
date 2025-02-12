#include <stdio.h>
#include <limits.h>
void main() {
    printf("%-10s %-10s %-10s %-15s %-15s %-20s %-10s\n", "Type", "Format", "Size", "Max signed", "Min signed", "Unsigned Format", "Max unsigned");
    printf("%-10s %-10.2s %-10.2d %-15.2d %-15.2d %-20.2s %-10.2d\n", "int", "d", sizeof(int), INT_MAX, INT_MIN, "u", UINT_MAX);
    printf("%-10s %-10.2s %-10.2d %-15.2d %-15.2d %-20.2s %-10.2d\n", "short", "hd", sizeof(short), SHRT_MAX, SHRT_MIN, "hu", USHRT_MAX);
    printf("%-10s %-10.2s %-10.2d %-15.2d %-15.2d %-20.2s %-10.2d\n", "long", "ld", sizeof(long), LONG_MAX, LONG_MIN, "lu", ULONG_MAX);
    printf("%-10s %-10.3s %-10.2d %-15.2d %-15.2d %-20.2s %-10.2d\n", "long long", "lld", sizeof(long long), LLONG_MAX, LLONG_MIN, "llu", ULLONG_MAX);
    printf("%-10s %-10.2s %-10.2d %-15.2d %-15.2d %-20.2s %-10.2d\n", "char", "d", sizeof(char), SCHAR_MAX, SCHAR_MIN, "u", UCHAR_MAX);
}