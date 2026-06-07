        *n_pairs = len / 2 + 1;
        is_even = 0;
    }
  
    p_arr = (Pair *)malloc(sizeof(Pair) * (*n_pairs));
​
    if (is_even)
    {
        for (int i = 0; i < *n_pairs; i++)
        {
            p_arr[i][0] = string[i*2];
            p_arr[i][1] = string[i*2 + 1];
        }
    }
    else
    {
        for (int i = 0; i < *n_pairs - 1; i++)
        {
            p_arr[i][0] = string[i*2];
            p_arr[i][1] = string[i*2 + 1];
        }
        p_arr[*n_pairs - 1][0] = string[len - 1];
        p_arr[*n_pairs - 1][1] = '_';
    }
    return p_arr;
}
​
/*
1. 페어포인터를 사이즈만큼 할당해서 반환한다.
2. 페어포인터 사이즈를 역참조 할당한다.
3. 페어포인터 사이즈는 전체 문자열의 길이 /2 몫
4. 안나누어 떨어지면 무조건 마지막은 마지막 남은거+_ 로 하나 더. 
*/