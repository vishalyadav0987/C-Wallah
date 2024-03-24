int main() {
    int A[100000], N, i, last_digit;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < N; i++) {
        last_digit = A[i] % 10;

    }

    if (last_digit % 10 == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

