#include <stdio.h>
#include <gmp.h>

int main() {
    unsigned long n;
    mpz_t r;
    FILE *f;

    scanf("%lu", &n);
    mpz_init(r);
    mpz_fac_ui(r, n);

    f = fopen("factorial_result.txt", "w");
    if (!f) return 1;
    gmp_fprintf(f, "%Zd\n", r);
    fclose(f);

    mpz_clear(r);
    return 0;
}
