    #include<stdio.h>
    #include<stdlib.h>
    #include <gmp.h>

     int main(){
         mpz_t num;
         mpz_t i;
         mpz_t q;
         mpz_t sqrt_n;
         long long int count=0;
         mpz_t result;
         mpz_init(num);
         mpz_init(q);
         mpz_set_ui(q,0);
         mpz_init(sqrt_n);
         mpz_init(result);
         mpz_init_set_ui(i, 1);
         printf("Enter Number: ");
         gmp_scanf("%Zd", num);
         mpz_sqrt(sqrt_n, num);
         long long int *factors = malloc(7000000 * sizeof(long long int));
         while(mpz_cmp(i,sqrt_n)<=0){
            if(mpz_divisible_p(num, i)==1){
                mpz_fdiv_q(q, num, i);
                factors[count++] = mpz_get_ui(i);
                factors[count++] = mpz_get_ui(q);
            }
            mpz_add_ui(i, i, 1);
            mpz_set_ui(q,0);
         }
         for (long long int j = 0; j < count; j++) {
         printf("%lld\n ", factors[j]);
}
         mpz_clear(num);
         mpz_clear(i);
         mpz_clear(q);
         mpz_clear(sqrt_n);
         mpz_clear(result);
         free(factors);

      }
