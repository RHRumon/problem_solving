#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, i, step, f;
    scanf("%d",&t);
    char s[26];
    while(t--)
    {
        scanf("%s", &s);
        n = strlen(s);

        f = 1;

        int a_index = -1;
        for(i = 0; i < n; i++)
        {
            if(s[i] == 'a')
            {
                a_index = i;
                break;
            }
        }

        if(a_index == -1)
        {
            printf("NO\n");
            continue;
        }

        char char_to_find = 'b';
        int current_pos = a_index;
        int left_pos = current_pos - 1;
        int right_pos = current_pos + 1;

        for(step = 1; step < n; step++)
        {

            if (left_pos >= 0 && s[left_pos] == char_to_find)
            {
                current_pos = left_pos;
                char_to_find++;
                left_pos = min(left_pos, current_pos - 1);
            }
            else if (right_pos < n && s[right_pos] == char_to_find)
            {
                current_pos = right_pos;
                char_to_find++;
                right_pos = max(right_pos, current_pos + 1);
            }
            else
            {
                f = 0;
                break;
            }
        }

        puts(f == 1  ? "YES" : "NO");
    }
}
