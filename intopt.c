#include <stdio.h>
#include <stdlib.h>

double* make_array(int n)
{
        double* a;
        a = calloc(n, sizeof(double));
        return a;
}

double** make_matrix(int m, int n)
{
        double** a;

        a = calloc(m, sizeof(double*));
        for (int i = 0; i < m; i++)
                a[i] = calloc(n, sizeof(double));
        return a;
}

void print_program(double** a, double* b, double* c)
{

}

int main()
{
        int m;
        int n;
        scanf("%d %d", &m, &n);

        double* c = make_array(n);
        double** a = make_matrix(m, n);
        double* b = make_array(m);

        double tmp;
        for (int i = 0; i < n; i++) {
                scanf("%f", &tmp);
                c[i] = tmp;
        }

        for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                        scanf("%f", &tmp);
                        a[i][j] = tmp;
                }
        }

        for (int i = 0; i < m; i++) {
                scanf("%f", &tmp);
                b[i] = tmp;
        }
        
        print_program(a, b, c);
        return 0;
} 