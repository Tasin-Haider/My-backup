#include <stdio.h>
#include <gmp.h>

int main() {
    unsigned long n;
    mpz_t r;
    FILE *f;

    printf("Enter a non-negative integer: ");
    scanf("%lu", &n);

    mpz_init2(r, n * 20); // Preallocate more space

    mpz_fac_ui(r, n); // GMP does this with its own optimized internals

    f = fopen("factorial_result.txt", "w");
    if (!f) return 1;
    gmp_fprintf(f, "%Zd\n", r);
    fclose(f);

    mpz_clear(r);
    return 0;
}
