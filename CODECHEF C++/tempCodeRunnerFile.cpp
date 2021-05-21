const int N = 1000001;
    // bool sieve[N];

    // memset(sieve, true, sizeof(sieve));

    // for (int i = 2; i * i <= N; i++)
    // {
    //     if (sieve[i])
    //     {
    //         for (int j = i * i; j <= N; j += i)
    //         {
    //             sieve[j] = false;
    //         }
    //     }
    // }
    // int ans[N] = {0};
    // int cntr = 0;
    // for (int i = 5; i < N; i++)
    // {
    //     if (sieve[i] && sieve[i + 2])
    //     {
    //         cntr++;
    //     }
    //     ans[i] = cntr;
    // }